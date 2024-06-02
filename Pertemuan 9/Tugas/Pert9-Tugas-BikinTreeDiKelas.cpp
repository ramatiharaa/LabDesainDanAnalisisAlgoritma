#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;
};

Node* createNode(char data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insert(Node* root, char data) {
    if (root == NULL) {
        root = createNode(data);
    } else if (data <= root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;
}

void inorderTraversal(Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

void postorderTraversal(Node* root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->data << " ";
    }
}

void preorderTraversal(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

int main() {
    Node* root = NULL;
    root = insert(root, 'R');
    insert(root, 'A');
    insert(root, 'E');
    insert(root, 'S');
    insert(root, 'I');
    insert(root, 'T');
    
    cout << "\n\n\tPosisi Awal Tree:\n\n";
    cout << "\t       R\n\t      / \\\n\t     A   E\n\t    /\n\t   S\n\t  / \\\n\t I   T\n\n";


    cout << "Preorder: ";
    preorderTraversal(root);
    cout << endl;

    cout << "Inorder: ";
    inorderTraversal(root);
    cout << endl;
    
    cout << "Postorder: ";
    postorderTraversal(root);
    cout << endl;
    
    return 0;
}