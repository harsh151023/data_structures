#include <bits/stdc++.h>

using namespace std;
struct node{

int data;
struct node*left;
struct node *right;
};


struct node*newnode(int data){

struct node *t=(struct node *)malloc(sizeof(struct node));
t->data=data;
t->left=NULL;
t->right=NULL;

};
int sizeOfTree(struct node *root)
{
	return root? (1+sizeOfTree(root->left)+sizeOfTree(root->right)): 0;
}


int main()
{
	struct node *root=NULL;
	root = newNode(10);
	root->left = newnode(20);
	root->right = newnode(30);
	root->left->left = newnode(40);
	root->right->left = newnode(50);
	printf("%d\n", sizeOfTree(root));
	return 0;
}

