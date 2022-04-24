/**
 * @file Q203-RemoveLinkedListElements.cpp
 * @author Ryo-Ura
 * @brief  
 *      Runtime: O(n)   (can be simplified from not having two loops)
 *      Runtime: 26 ms, faster than 69.06% of C++ online submissions for Remove Linked List Elements. 
 *      Memory Usage: 15.1 MB, less than 48.30% of C++ online submissions for Remove Linked List
 * @version 0.1
 *      this is iterative approach, recursive should also work.
 * @date 2022-04-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == nullptr) 
            return head;
        ListNode* headPtr = head;
        while (headPtr->next != nullptr)
        {
            if (headPtr->next->val == val)
            {
                headPtr->next = headPtr->next->next;
                continue;
            }
            headPtr = headPtr->next;
        }
        
        ListNode* newHeadPtr = head;
        while (newHeadPtr != nullptr)
        {
            if(newHeadPtr->val != val) 
                break;
            head = newHeadPtr->next;
            newHeadPtr = newHeadPtr->next;
        }
        return head;
    }
};