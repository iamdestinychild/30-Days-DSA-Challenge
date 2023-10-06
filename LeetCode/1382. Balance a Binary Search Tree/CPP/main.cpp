/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> nums;
    void inorder(TreeNode* root) {
        if (root != NULL) {
            inorder(root->left);
            nums.push_back(root->val);
            inorder(root->right);
        }
    }
    TreeNode* sortedArrayToBST(int left, int right) {
    if (left > right) {
        return NULL;
    }
    int mid = left + (right - left) / 2;
    TreeNode* newNode = new TreeNode(nums[mid]);
    newNode->left = sortedArrayToBST(left, mid - 1);
    newNode->right = sortedArrayToBST(mid + 1, right);
    return newNode;
    }
    TreeNode* balanceBST(TreeNode* root) {
        nums.clear();
        inorder(root);
        return sortedArrayToBST(0, nums.size() - 1);
    }
};