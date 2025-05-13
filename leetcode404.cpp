/*
Leetcode 404 Sum of Left Leaves Easy

Given the root of a binary tree, return the sum of all left leaves.
A leaf is a node with no children. A left leaf is a leaf that is the left child of another node.
*/

// Definition for a binary tree node.

struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
//Solution
class Solution
{
public:
  int sumOfLeftLeaves(TreeNode *root)
  {
    if (root == NULL)
      return 0;
    int sum = 0;
    if (root->left){
      if (root->left->left == NULL && root->left->right == NULL){
        sum += root->left->val;
      }
      else{
        sum += sumOfLeftLeaves(root->left);
      }
    }
    sum += sumOfLeftLeaves(root->right);
    return sum;
  }
};