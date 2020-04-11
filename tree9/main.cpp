/* C++ Program to find LCA of n1 and n2 using one traversal of Binary Tree */
#include <iostream>

using namespace std;


struct Node
{
	struct Node *left, *right;
	int data;
};


Node* newNode(int key)
{
	Node *temp = new Node;
	temp->data = key;
	temp->left = temp->right = NULL;
	return temp;
}


bool childsum(struct Node* root){

if(root->left==NULL && root->right==NULL ){
    return true;
}
int left_data = 0, right_data = 0;
if(root->left!=NULL){
    left_data=root->left->data;
}
if(root->right!=NULL){
    right_data=root->right->data;
}

if(root->left!=NULL && root->right!=NULL)
     childsum(root->left)&& childsum(root->right);
if(root->data==left_data+right_data)
    return true;
else
    return false;
}


int main()
{

	struct Node *root = newNode(10);
    root->left     = newNode(8);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(5);
    root->right->right = newNode(2);
	cout << childsum(root);

	return 0;
}


