/**
 * @file Q104-MaximumDepthOfBinaryTree.cpp
 * @author your name (you@domain.com)
 * @brief Runtime: 8 ms, faster than 80.13% of C++ online submissions for Maximum Depth of Binary Tree.
 *        Memory Usage: 18.9 MB, less than 56.78% of C++ online submissions for Maximum Depth of Binary Tree.
 *        O(log(n)) 
 * @version 0.1
 * @date 2022-04-29
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
    int maxDepth(TreeNode* root) {
        if (root == nullptr)
            return 0;
        
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;

    }
};