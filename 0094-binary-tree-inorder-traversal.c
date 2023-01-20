/**
 * Given the root of a binary tree, return the inorder traversal of its nodes'
 * values.
 *
 * Constraints:
 *
 * The number of nodes in the tree is in the range [0, 100].
 * -100 <= Node.val <= 100
 *
 * Note: The returned array must be malloced, assume caller calls free().
 *
 * Space: O(n)
 * Time: O(n)
 */

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

void traverse(struct TreeNode *root, int *ret, int *index) {
    if (!root)
        return;
    traverse(root->left, ret, index);
    ret[(*index)++] = root->val;
    traverse(root->right, ret, index);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int *ret = malloc(101 * sizeof(int));
    *returnSize = 0;
    traverse(root, ret, returnSize);
    return ret;
}
