/**
 * @file Q206-ReverseLinkedList.cpp      try again
 * @author your name (you@domain.com)
 * @brief   Recursively reverse a linked list
 *              Runtime: 8 ms, faster than 59.17% of C++ online submissions for Reverse Linked List.
 *              Memory Usage: 8.4 MB, less than 42.36% of C++ online submissions for Reverse Linked List.
 * 
 * @version 0.1
 * @date 2022-05-14
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
#include <math.h>
#include <utility>
#include <limits>
#include <unordered_set>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr or head->next == nullptr)
        {
            return head;
        }
        ListNode* newHead = reverseList(head->next);    //
        ListNode* newTail = head->next;
        newTail->next = head;
        head->next = nullptr;
        return newHead;
    }
};