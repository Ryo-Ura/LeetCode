/**
 * @file Q101-SymmetricTree.cpp
 * @author your name (you@domain.com)
 * @brief   O(n), if tree consists of n and m, it will be O(min(n, m))
 *  
 *          Runtime: 3 ms, faster than 90.60% of C++ online submissions for Symmetric Tree.
 *          Memory Usage: 16.6 MB, less than 19.51% of C++ online submissions for Symmetric Tree.
 *  
 *          changed 
 *              TreeNode* leftTree = root->left; TreeNode* rightTree = root->right;
 *              return isSymmetricHelper(leftTree, rightTree)
 *          to
 *              return isSymmetricHelper(root->left, root->right);
 *          improved memory usage by .3MB
 *          
 *          Runtime: 3 ms, faster than 90.60% of C++ online submissions for Symmetric Tree.
 *          Memory Usage: 16.3 MB, less than 76.38% of C++ online submissions for Symmetric Tree.
 *      
 * @version 0.1
 * @date 2022-05-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// include statements
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
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr)
            return true;
        if ((root->left and !root->right) or (!root->left and root->right))
            return false;
        return isSymmetricHelper(root->left, root->right);
    }

    bool isSymmetricHelper(TreeNode* leftTree, TreeNode* rightTree){
        if (leftTree == nullptr and rightTree == nullptr)
            return true;
        else if (leftTree and !rightTree or !leftTree and rightTree)
            return false;

        return isSymmetricHelper(leftTree->left, rightTree->right) and isSymmetricHelper(leftTree->right, rightTree->left) and 
                leftTree->val == rightTree->val;
        
    }
};