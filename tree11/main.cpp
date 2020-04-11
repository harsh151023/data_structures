//Convert a given tree to its Sum Tree
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
 int sumtree(struct Node*root){
    int left_data=0 ,right_data=0;
if(root->left!=NULL){
    left_data=root->left->data;
}
if(root->right!=NULL){
    right_data=root->right->data;
}
if(root->left==NULL && root->right==NULL){
    root->data=0;
}
else{
    root->data=left_data+right_data+sumtree(root->left)+sumtree(root->right);
}
return root->data;
}
void preorder(Node* node)
{
	if (node == NULL)
		return;
	printf("%d ", node->data);
	preorder(node->left);
	preorder(node->right);
}

int main()
{

	struct Node *root = newNode(10);
    root->left     = newNode(-2);
    root->right = newNode(6);
    root->left->left = newNode(8);
    root->left->right = newNode(-4);
    root->right->left = newNode(7);
    root->right->right = newNode(5);
	sumtree(root);
	preorder(root);

	return 0;
}
