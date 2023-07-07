#include <iostream>

using namespace std;

//An example code for the Binary Trees algorithm in cpp

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinaryTree {
private:
    Node* root;

    void insertRecursive(Node*& node, int value) {
        if (node == nullptr) {
            node = new Node(value);
        } else {
            if (value < node->data) {
                insertRecursive(node->left, value);
            } else {
                insertRecursive(node->right, value);
            }
        }
    }

    bool searchRecursive(Node* node, int value) {
        if (node == nullptr) {
            return false;
        } else if (node->data == value) {
            return true;
        } else if (value < node->data) {
            return searchRecursive(node->left, value);
        } else {
            return searchRecursive(node->right, value);
        }
    }

    void printInorderRecursive(Node* node) {
        if (node != nullptr) {
            printInorderRecursive(node->left);
            cout << node->data << " ";
            printInorderRecursive(node->right);
        }
    }

public:
    BinaryTree() : root(nullptr) {}

    void insert(int value) {
        insertRecursive(root, value);
    }

    bool search(int value) {
        return searchRecursive(root, value);
    }

    void printInorder() {
        printInorderRecursive(root);
    }
};

int main() {
    BinaryTree binaryTree;

    binaryTree.insert(5);
    binaryTree.insert(3);
    binaryTree.insert(7);
    binaryTree.insert(1);
    binaryTree.insert(4);

    cout << "Inorder traversal: ";
    binaryTree.printInorder();
    cout << endl;

    int searchValue = 7;
    cout << "Searching for " << searchValue << ": ";
    if (binaryTree.search(searchValue)) {
        cout << "Found" << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}
