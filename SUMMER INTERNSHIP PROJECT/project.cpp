#include <iostream>
using namespace std;

// Definition of a tree node
class My_TreeNode {
public:
    int data;
    My_TreeNode* left;
    My_TreeNode* right;

    My_TreeNode(int value) {
        data = value;
        left = right = nullptr;
    }
};

// Class to represent the Binary Search Tree
class BinarySearchTree {
private:
    My_TreeNode* root;

    //  function to insert a new node
    My_TreeNode* insert(My_TreeNode* node, int key) {
        if (node == nullptr) {
            return new My_TreeNode(key);
        }
        if (key < node->data) {
            node->left = insert(node->left, key);
        } else {
            node->right = insert(node->right, key);
        }
        return node;
    }

    //  function to search for a node
    My_TreeNode* search(My_TreeNode* node, int key) {
        if (node == nullptr || node->data == key) {
            return node;
        }
        if (key < node->data) {
            return search(node->left, key);
        }
        return search(node->right, key);
    }

    //  function to find the minimum value node
    My_TreeNode* minValueNode(My_TreeNode* node) {
        My_TreeNode* current = node;
        while (current && current->left != nullptr) {
            current = current->left;
        }
        return current;
    }

    // function to delete a node
    My_TreeNode* deleteNode(My_TreeNode* node, int key) {
        if (node == nullptr) {
            return node;
        }
        if (key < node->data) {
            node->left = deleteNode(node->left, key);
        } else if (key > node->data) {
            node->right = deleteNode(node->right, key);
        } else {
            
            if (node->left == nullptr) {
                return node->right;
            } else if (node->right == nullptr) {
                return node->left;
            }
            
            My_TreeNode* temp = minValueNode(node->right);
            node->data = temp->data;
            node->right = deleteNode(node->right, temp->data);
        }
        return node;
    }

    // functions for traversals
    void inorder(My_TreeNode* node) {
        if (node != nullptr) {
            inorder(node->left);
            cout << node->data << " ";
            inorder(node->right);
        }
    }

    void preorder(My_TreeNode* node) {
        if (node != nullptr) {
            cout << node->data << " ";
            preorder(node->left);
            preorder(node->right);
        }
    }

    void postorder(My_TreeNode* node) {
        if (node != nullptr) {
            postorder(node->left);
            postorder(node->right);
            cout << node->data << " ";
        }
    }

public:
    BinarySearchTree() {
        root = nullptr;
    }

    void insert(int key) {
        root = insert(root, key);
    }

    My_TreeNode* search(int key) {
        return search(root, key);
    }

    void deleteNode(int key) {
        root = deleteNode(root, key);
    }

    void inorder() {
        inorder(root);
        cout << endl;
    }

    void preorder() {
        preorder(root);
        cout << endl;
    }

    void postorder() {
        postorder(root);
        cout << endl;
    }
};

// Driver code
int main() {
    BinarySearchTree bst;
    bst.insert(24);
    bst.insert(46);
    bst.insert(26);
    bst.insert(38);
    bst.insert(77);
    bst.insert(18);
    bst.insert(88);

    cout << "InOrder Traversal: ";
    bst.inorder();  

    cout << "PreOrder Traversal: ";
    bst.preorder(); 

    cout << "PostOrder Traversal: ";
    bst.postorder(); 

    // Search for a value
    if (bst.search(88)) {
        cout << "Found 88 in the tree." << endl;
    } else {
        cout << "88 not found in the tree." << endl;
    }

    // Delete a value
    bst.deleteNode(20);
    cout << "InOrder Traversal after deleting 20: ";
    bst.inorder(); 

    return 0;
}