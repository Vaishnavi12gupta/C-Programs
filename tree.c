#include<stdio.h>
struct Node
{
    int data;
    Node *left;
    Node *right;
};
void preorder(struct Node* root)
{
	if(root = = NULL)
    {
		return;
		printf("%d",root -> data);
		preorder(root -> left);
		preorder(root -> right);
    }
}
void main()
{
    struct Node *root;
    printf("preorder is:%d",root);
}