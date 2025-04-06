#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define ll long long
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int maxDepth(TreeNode *root)
{

    if (root == NULL)
        return 0;

    int leftTree = maxDepth(root->left);
    int rightTree = maxDepth(root->right);

    return 1 + max(leftTree, rightTree);
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // Creating a sample tree
    //       3
    //      / \
    //     9   20
    //        / \
    //       15  7

    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    int depth = maxDepth(root);

    std::cout << "The maximum depth of the binary tree is: " << depth << std::endl;

    // Clean up dynamically allocated memory
    delete root->right->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
