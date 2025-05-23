/*
Leetcode 145 Binary Tree Postorder Traversal Easy
Given the root of a binary tree, return the postorder traversal of its nodes' values.
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
 
//Solution

class Solution {
public:
    vector<int> ans;
    vector<int> postorderTraversal(TreeNode* root) {
     if(root==NULL) return ans;
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        ans.push_back(root->val);
        return ans;
    }
};