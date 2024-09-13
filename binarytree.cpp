#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node in the binary tree
struct Node {
  int data;
  struct Node *left;
  struct Node *right;
};

// Function to create a new node
struct Node *createNode(int data) {
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

// Function to insert a new node into the binary tree
struct Node *insertNode(struct Node *root, int data) {
  if (root == NULL) {
    root = createNode(data);
  } else {
    if (data <= root->data) {
      root->left = insertNode(root->left, data);
    } else {
      root->right = insertNode(root->right, data);
    }
  }
  return root;
}

// Function to print the binary tree using inorder traversal
void inorderTraversal(struct Node *root) {
  if (root != NULL) {
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
  }
}

int main() {
  struct Node *root = NULL;

  // Insert elements into the binary tree
  root = insertNode(root, 10);
  root = insertNode(root, 5);
  root = insertNode(root, 20);
  root = insertNode(root, 3);
  root = insertNode(root, 7);
  root = insertNode(root, 15);
  root = insertNode(root, 25);

  // Print the binary tree using inorder traversal
  printf("Binary Tree (Inorder Traversal): ");
  inorderTraversal(root);
  printf("\n");

  return 0;
}