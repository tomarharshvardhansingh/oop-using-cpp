#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
    T data;
    Node* left;
    Node* right;

    Node(T value) {
        data = value;
        left = right = nullptr;
    }
};

template <typename T>
class BinaryTree {
private:
    Node<T>* root;

    void insert(Node<T>*& node, T value) {
        if (!node) {
            node = new Node<T>(value);
            return;
        }
        if (value < node->data)
            insert(node->left, value);
        else
            insert(node->right, value);
    }

    void inorder(Node<T>* node) {
        if (!node) return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    void destroy(Node<T>* node) {
        if (!node) return;
        destroy(node->left);
        destroy(node->right);
        delete node;
    }

public:
    BinaryTree() {
        root = nullptr;
    }

    ~BinaryTree() {
        destroy(root);
    }

    void insert(T value) {
        insert(root, value);
    }

    void displayInorder() {
        inorder(root);
        cout << endl;
    }
};

int main() {
    BinaryTree<int> intTree;
    intTree.insert(5);
    intTree.insert(3);
    intTree.insert(7);
    intTree.insert(1);

    cout << "Inorder traversal (int): ";
    intTree.displayInorder();

    BinaryTree<string> stringTree;
    stringTree.insert("pear");
    stringTree.insert("apple");
    stringTree.insert("mango");

    cout << "Inorder traversal (string): ";
    stringTree.displayInorder();

    return 0;
}
