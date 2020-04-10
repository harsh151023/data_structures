#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
};


struct Node* newNode(int data)

{
	struct Node* node = new Node;
	node->data = data;
	node->left = node->right = NULL;
	return(node);
}

void mirror(Node* root)
{
	if (root == NULL)
		return;

	queue<Node*> q;
	q.push(root);


	while (!q.empty())
	{

		Node* curr = q.front();
		q.pop();


		swap(curr->left, curr->right);

		if (curr->left)
			q.push(curr->left);
		if (curr->right)
			q.push(curr->right);
	}
}



void inOrder(struct Node* node)
{
	if (node == NULL)
		return;
	inOrder(node->left);
	cout << node->data << " ";
	inOrder(node->right);
}



int main()
{
	struct Node *root = newNode(1);
	root->left	 = newNode(2);
	root->right	 = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);


	cout << "\n Inorder traversal of the"
			" constructed tree is \n";
	inOrder(root);


	mirror(root);

	/* Print inorder traversal of the mirror tree */
	cout << "\n Inorder traversal of the "
		"mirror tree is \n";
	inOrder(root);

	return 0;
}
