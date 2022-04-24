#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

/**
 * @brief 
 * Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Tree Inorder Traversal.
 * Memory Usage: 8.6 MB, less than 17.96% of C++ online submissions for Binary Tree Inorder Traversal.
 * 
 */

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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        traversal(root, result);
        return result;
    }

    TreeNode traversal(TreeNode* root, vector<int> & v) {
        if (root == nullptr)
            return TreeNode();

        
        traversal(root->left, v);
        v.push_back(root->val);

        traversal(root->right, v);
        return TreeNode();
    }
};