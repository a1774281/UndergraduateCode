#include "BinarySearchTree.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    stringstream str_strm;
    str_strm << input;
    string temp_str;
    string option;      //Identifier from the set {BIN, BPO, BPR, HS}
    int temp_int;
    str_strm >> option;
    vector<int> inputs;         //Vector for number array (couldve used dynamic array)
    while(!str_strm.eof()) {                        //While statement for int inputs
        str_strm >> temp_str;
        if(stringstream(temp_str) >> temp_int) {
            inputs.push_back(temp_int);
        }
        temp_str = "";
    }
    BinarySearchTree T = BinarySearchTree(inputs[0]);
    TreeNode* root;
    root = T.root;
    int inputlength = inputs.size();
    for (int i = 1; i < inputlength; i++) {
        root = T.insert(inputs[i], root);
    }
    if (option == "BIN"){           //Identifier from the set {BIN, BPO, BPR, HS}
        T.print_inorder(root);
    }
    else if (option == "BPR") {
        T.print_preorder(root);
    }
    else if (option == "BPO") {
        T.print_postorder(root);
    }
    cout << endl;
}
