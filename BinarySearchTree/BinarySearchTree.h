#ifndef BinarySearchTree_H
#define BinarySearchTree_H

struct TreeNode
{
    int data;
    TreeNode* left;
    TreeNode* right;
};

class BinarySearchTree {
public:
    BinarySearchTree(int n);
    TreeNode* root;
    TreeNode* newTreenode(int n);
    TreeNode* insert(int n, TreeNode* t);
    void print_inorder(TreeNode* t);
    void print_preorder(TreeNode* t);
    void print_postorder(TreeNode* t);
    ~BinarySearchTree();
};
#endif