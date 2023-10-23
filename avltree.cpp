#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    int height;

    Node(int key) {
        data = key;
        left = NULL;
        right = NULL;
        height = 1;
    }
};

class AVLTree {
private:
    Node* root;

    int getHeight(Node* node) {
        if (node == NULL)
            return 0;
        return node->height;
    }

    int getBalanceFactor(Node* node) {
        if (node == NULL)
            return 0;
        return getHeight(node->left) - getHeight(node->right);
    }

    void updateHeight(Node* node) {
        if (node != nullptr) {
            node->height = 1 + max(getHeight(node->left), getHeight(node->right));
        }
    }

    Node* rotateRight(Node* y) {
        Node* x = y->left;
        Node* T2 = x->right;

        x->right = y;
        y->left = T2;

        updateHeight(y);
        updateHeight(x);

        return x;
    }

    Node* rotateLeft(Node* x) {
        Node* y = x->right;
        Node* T2 = y->left;

        y->left = x;
        x->right = T2;

        updateHeight(x);
        updateHeight(y);

        return y;
    }

    Node* insert(Node* node, int key) {
        if (node == nullptr)
            return new Node(key);

        if (key < node->data)
            node->left = insert(node->left, key);
        else if (key > node->data)
            node->right = insert(node->right, key);
        else
            return node; // Duplicate keys are not allowed.

        updateHeight(node);

        int balance = getBalanceFactor(node);

        // Left Heavy
        if (balance > 1) {
            if (key < node->left->data) {
                // Left Left Case
                return rotateRight(node);
            }
            else {
                // Left Right Case
                node->left = rotateLeft(node->left);
                return rotateRight(node);
            }
        }
        // Right Heavy
        if (balance < -1) {
            if (key > node->right->data) {
                // Right Right Case
                return rotateLeft(node);
            }
            else {
                // Right Left Case
                node->right = rotateRight(node->right);
                return rotateLeft(node);
            }
        }

        return node;
    }

    void inorderTraversal(Node* node) {
        if (node == nullptr)
            return;

        inorderTraversal(node->left);
        cout << node->data << " ";
        inorderTraversal(node->right);
    }

public:
    AVLTree() {
        root = nullptr;
    }

    void insert(int key) {
        root = insert(root, key);
    }

    void printInorder() {
        inorderTraversal(root);
        cout << endl;
    }
};

int main() {
    AVLTree tree;

    tree.insert(10);
    tree.insert(20);
    tree.insert(30);
    tree.insert(40);
    tree.insert(50);
    tree.insert(25);

    cout << "Inorder Traversal of AVL Tree: ";
    tree.printInorder();

    return 0;
}