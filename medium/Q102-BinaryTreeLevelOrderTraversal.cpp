/**
 * @file Q102-BinaryTreeLevelOrderTraversal.cpp
 * @author your name (you@domain.com)
 * @brief 
 * 
 *          Level order traversal using queue. Dividing each level is tough, better try this again
 *          Runtime: 5 ms, faster than 54.78% of C++ online submissions for Binary Tree Level Order Traversal.
 *          Memory Usage: 12.6 MB, less than 33.04% of C++ online submissions for Binary Tree Level Order Traversal.
 * @version 0.1
 * @date 2022-06-02
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
#include <queue>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
   TreeNode *left;
   TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        queue<TreeNode*> myQueue;
        if (root == nullptr)
            return result;
        myQueue.push(root);
        vector<int> level;
        while (!myQueue.empty())
        {
            TreeNode* ptr = myQueue.front();
            myQueue.pop();
            if (ptr == nullptr)
            {
                result.push_back(level);
                level.resize(0);
                if (myQueue.size() > 0)
                    myQueue.push(nullptr);
                
            }else{
                level.push_back(ptr->val);
                if (ptr->left != nullptr)
                    myQueue.push(ptr->left);
                if (ptr->right != nullptr)
                    myQueue.push(ptr->right);
            }
        }
        return result;
    }
};