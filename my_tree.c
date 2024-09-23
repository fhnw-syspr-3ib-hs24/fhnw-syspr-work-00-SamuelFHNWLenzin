#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    char label[32];
    struct node *left;
    struct node *right;
} Node;

int main(int argc, char const *argv[])
{
    Node *a = malloc(sizeof(Node));
    Node *b = malloc(sizeof(Node));
    Node *c = malloc(sizeof(Node));

        // Initialize node labels
    strcpy(a->label, "I'm the node a");
    strcpy(b->label, "I'm the node b");
    strcpy(c->label, "I'm the node c");

    // Allocate memory for right child of node a
    a->right = malloc(sizeof(Node));
    if (a->right == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        free(a);
        free(b);
        free(c);
        return 1;
    }
    strcpy(a->right->label, "I'm the right node of A");
    a->right->left = NULL; // Initialize left pointer of right node
    a->right->right = NULL; // Initialize right pointer of right node

    // Set up relationships
    a->right->left = b; // Link node a's right to node b
    b->left = NULL; // No left child for node b
    b->right = c; // Link node b's right to node c
    c->left = NULL; // No left child for node c
    c->right = NULL; // No right child for node c

    // Print the structure
    printf("Node A: %s\n", a->label);
    printf("Node A Right: %s\n", a->right->label);
    printf("Node B: %s\n", b->label);
    printf("Node B Right: %s\n", b->right->label);
    printf("Node C: %s\n", c->label);

    // Free allocated memory
    free(a->right); // Free the dynamically allocated right node of a
    free(b); // Free node b
    free(c); // Free node c
    free(a); // Free node a

    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct node
// {
//     char label[32];
//     struct node *left;
//     struct node *right;
// } Node;

// int main(int argc, char const *argv[])
// {
//     Node a = {"I'm the node a"};
//     Node b = {"I'm the node b"};
//     Node c = {"I'm the node c"};

//     // Allocate memory for child nodes
//     a.right = malloc(sizeof(Node));
//     b.left = malloc(sizeof(Node));
//     b.right = malloc(sizeof(Node));
//     c.left = malloc(sizeof(Node));

//     // Set the labels for dynamically allocated nodes
//     if (a.right) strcpy(a.right->label, "I'm the right node of A");
//     if (b.left) strcpy(b.left->label, "I'm the left node of B");
//     if (b.right) strcpy(b.right->label, "I'm the right node of B");
//     if (c.left) strcpy(c.left->label, "I'm the left node of C");

//     // Now set the relationships
//     a.right->left = &b;   // Link to b
//     b.left = NULL;        // b.left points to NULL
//     b.right->right = &c;  // Link to c
//     c.left = &b;          // Link back to b

//     printf("Node A: %s\n", a.label);
//     printf("Node A Right: %s\n", a.right->label);
//     printf("Node B: %s\n", b.label);
//     printf("Node C: %s\n", c.label);

//     // Free allocated memory
//     free(a.right);
//     free(b.left);
//     free(b.right);
//     free(c.left);

//     return 0;
// }

