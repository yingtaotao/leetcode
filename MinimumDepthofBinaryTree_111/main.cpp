#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minDepth(TreeNode *root) {
    if (!root) return 0;
    if (!root->left) return 1 + minDepth(root->right);
    if (!root->right) return 1 + minDepth(root->left);
    return 1 + min(minDepth(root->left), minDepth(root->right));
}

int main() {
    return 0;
}

