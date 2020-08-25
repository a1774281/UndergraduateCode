#include "BinarySearchTree.h"
#include <iostream>
#include <string.h>
using namespace std;

/*Constructor: It takes an integer and creates a new BinarySearchTree which stores the integer.
It has two pointers left and right to (possibly empty) binary search trees
which are initialized to "NULL"*/
TreeNode* BinarySearchTree::newTreenode(int n) {
    TreeNode* newTree =  new TreeNode();
    newTree->left = NULL;
    newTree->right = NULL;
    newTree->data = n;
    return newTree;
}

BinarySearchTree::BinarySearchTree(int n) {
    root = newTreenode(n);
}

/*Method insert: It takes an integer n as an input and inserts the integer into the BinarySearchTree.
The input n is inserted into the left subtree if its value is less than or equal to the value of the
root and inserted into the right subtree if its value is greater than the value of the root.*/
TreeNode* BinarySearchTree::insert(int n, TreeNode* newTree) {
    if(newTree == NULL) {
        newTree = newTreenode(n);
    }
    else if(n <= newTree->data){
        newTree->left = insert(n, newTree->left);
    }
    else if(n > newTree->data){
        newTree->right = insert(n, newTree->right);
    }
    return newTree;
}

/*Method print_inorder: It carries out an inorder traversal of the tree and prints out the elements in the visited order.
The print out for a node with integer n should be "n " (value followed by a space symbol).*/
void BinarySearchTree::print_inorder(TreeNode* newTree) {
    if(newTree == NULL){
        return;
    }
    print_inorder(newTree->left);
    cout << newTree->data << " ";
    print_inorder(newTree->right);
}


/*Method print_preoder: It carries out a preorder traversal of the tree and prints out the elements in the visited order.
The print out for a node with integer n should be "n " (value followed by a space symbol).*/
void BinarySearchTree::print_preorder(TreeNode* newTree){
    if(newTree == NULL){
        return;
    }
    cout << newTree->data << " ";
    print_preorder(newTree->left);
    print_preorder(newTree->right);
}

/*Method print_postoder: It carries out a postorder traversal of the tree and prints out the elements in the visited order.
The print out for a node with integer n should be "n " (value followed by a space symbol).*/
void BinarySearchTree::print_postorder(TreeNode* newTree){
    if(newTree == NULL)
        return;
    print_postorder(newTree->left);
    print_postorder(newTree->right);
    cout << newTree->data << " ";
}

BinarySearchTree::~BinarySearchTree() {         //Probably shoudlve done a proper destructor but wasnt within bounds of exam requirements

}