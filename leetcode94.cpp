/*
Leetcode 94 BInary Tree Inorder Traveesal Easy
Given the root of a binary tree, return the inorder traversal of its nodes' values.
*/

// Deifnition for binary tree node
struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

//Solution
class Solution {
public:
    vector<int> ans;
    vector<int> inorderTraversal(TreeNode* root) {
     if(root==NULL) return ans;
     inorderTraversal(root->left);
     ans.push_back(root->val);
     inorderTraversal(root->right);
     return ans;
    }
};