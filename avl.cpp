#include <iostream>
#include <algorithm>

struct AVLNode {
    int data;
    int height;
    AVLNode* left;
    AVLNode* right;

    AVLNode(int value) : data(value), height(1), left(nullptr), right(nullptr) {}
};

class AVLTree {
public:
    AVLNode* root;

    AVLTree() : root(nullptr) {}

    void insert(int value) {
        root = insertRecursive(root, value);
    }

    void inorderTraversal() {
        inorderTraversalRecursive(root);
    }

private:
    int getHeight(AVLNode* node) {
        return (node != nullptr) ? node->height : 0;
    }

    int getBalance(AVLNode* node) {
        return (node != nullptr) ? getHeight(node->left) - getHeight(node->right) : 0;
    }

    int updateHeight(AVLNode* node) {
        return std::max(getHeight(node->left), getHeight(node->right)) + 1;
    }

    AVLNode* rotateRight(AVLNode* y) {
        AVLNode* x = y->left;
        AVLNode* T2 = x->right;

        x->right = y;
        y->left = T2;

        y->height = updateHeight(y);
        x->height = updateHeight(x);

        return x;
    }

    AVLNode* rotateLeft(AVLNode* x) {
        AVLNode* y = x->right;
        AVLNode* T2 = y->left;

        y->left = x;
        x->right = T2;

        x->height = updateHeight(x);
        y->height = updateHeight(y);

        return y;
    }

    AVLNode* insertRecursive(AVLNode* node, int value) {
        if (node == nullptr) {
            return new AVLNode(value);
        }

        if (value < node->data) {
            node->left = insertRecursive(node->left, value);
        } else {
            node->right = insertRecursive(node->right, value);
        }

        node->height = updateHeight(node);

        int balance = getBalance(node);

        // Left Left Case
        if (balance > 1 && value < node->left->data) {
            return rotateRight(node);
        }
        // Right Right Case
        if (balance < -1 && value > node->right->data) {
            return rotateLeft(node);
        }
        // Left Right Case
        if (balance > 1 && value > node->left->data) {
            node->left = rotateLeft(node->left);
            return rotateRight(node);
        }
        // Right Left Case
        if (balance < -1 && value < node->right->data) {
            node->right = rotateRight(node->right);
            return rotateLeft(node);
        }

        return node;
    }

    void inorderTraversalRecursive(AVLNode* node) {
        if (node != nullptr) {
            inorderTraversalRecursive(node->left);
            std::cout << node->data << " ";
            inorderTraversalRecursive(node->right);
        }
    }
};

int main() {
    AVLTree avlTree;
    avlTree.insert(50);
    avlTree.insert(30);
    avlTree.insert(70);
    avlTree.insert(20);
    avlTree.insert(40);

    std::cout << "Inorder Traversal: ";
    avlTree.inorderTraversal();
    std::cout << std::endl;

    return 0;
}
