
#include <iostream>
#include <algorithm>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int maxDepth(TreeNode* root, int& nummux) {
    if (root == NULL) {
        return 0;
    }
    int left = maxDepth(root->left, nummux);
    int right = maxDepth(root->right, nummux);
    nummux = std::max(left + right, nummux);
    return std::max(left, right) + 1;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->right->left = new TreeNode(5);
    int nummax = 0;
    
    std::cout << "Max depth of the binary tree: " << maxDepth(root, nummax) << std::endl;

    return nummax;
}