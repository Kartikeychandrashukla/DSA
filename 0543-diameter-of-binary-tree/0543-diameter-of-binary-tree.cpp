
class Solution {
public:
    int maxDiameter = 0;

    int height(TreeNode* root) {
        if (!root) return 0;

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        // Update the diameter at this node
        maxDiameter = max(maxDiameter, leftHeight + rightHeight);

        // Return height for parent computation
        return 1 + max(leftHeight, rightHeight);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return maxDiameter;
    }
};
