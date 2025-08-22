#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

// Utility to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

// Function to search an element in postorder[]
int search(int postorder[], int val, int start, int end) {
    
    for (int i = start; i <= end; i++) {
        if (postorder[i] == val)
            return i;
    }
    return -1;
}

// Recursive function to construct tree
struct Node* constructTreeUtil(int preorder[], int postorder[], int* preIndex,
                               int l, int h, int size) {
    if (*preIndex >= size || l > h)
        return NULL;

    // Create root with preorder element
    struct Node* root = newNode(preorder[*preIndex]);
    (*preIndex)++;

    // If single node, return
    if (l == h || *preIndex >= size)
        return root;

    // Next element in preorder is left child, find it in postorder
    int idx = search(postorder, preorder[*preIndex], l, h);
    if (idx == -1) return root; // safety check

    // Construct left & right subtrees
    root->left = constructTreeUtil(preorder, postorder, preIndex, l, idx, size);
    root->right = constructTreeUtil(preorder, postorder, preIndex, idx + 1, h - 1, size);

    return root;
}

// Wrapper
struct Node* constructTree(int preorder[], int postorder[], int size) {
    int preIndex = 0;
    return constructTreeUtil(preorder, postorder, &preIndex, 0, size - 1, size);
}

// Inorder traversal (to verify construction)
void printInorder(struct Node* root) {
    if (root == NULL) return;
    printInorder(root->left);
    printf("%d ", root->data);
    printInorder(root->right);
}

// Driver
int main() {
    int preorder[] = {1, 2, 4, 5, 3, 6, 7};
    int postorder[] = {4, 5, 2, 6, 7, 3, 1};
    int size = sizeof(preorder) / sizeof(preorder[0]);

    struct Node* root = constructTree(preorder, postorder, size);

    printf("Inorder Traversal of constructed tree:\n");
    printInorder(root);

    return 0;
}
