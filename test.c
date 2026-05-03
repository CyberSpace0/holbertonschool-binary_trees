#include "binary_trees.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
* hash_table_delete - entry point
* @ht: string to generate the real key for dictionary
* Return: always (0) success
*/
#include <stdio.h>
#include <stdlib.h>

/* تعريف النود */
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

/* إنشاء نود */
node *create_node(int value)
{
    node *new = malloc(sizeof(node));
    if (new == NULL)
        return NULL;

    new->data = value;
    new->left = NULL;
    new->right = NULL;

    return new;
}

/* Preorder: Root -> Left -> Right */
void preorder(node *root)
{
    if (root == NULL)
        return;

    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

/* Inorder: Left -> Root -> Right */
void inorder(node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

/* Postorder: Left -> Right -> Root */
void postorder(node *root)
{
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main(void)
{
    /* بناء الشجرة يدويًا */

    node *root = create_node(1);
    root->left = create_node(2);
    root->right = create_node(3);
    root->left->left = create_node(4);
    root->left->right = create_node(5);

    /*
            1
           / \
          2   3
         / \
        4   5
    */

    printf("Preorder: ");
    preorder(root);

    printf("\nInorder: ");
    inorder(root);

    printf("\nPostorder: ");
    postorder(root);

    printf("\n");

    return 0;
}
