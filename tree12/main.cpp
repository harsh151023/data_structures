//maximum sum path leaf
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>


struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* maxLeaf=NULL;
int maxsum=INT_MIN;
// creation of node.
struct node* newNode(int data)
{
  struct node* temp = (struct node*)malloc(sizeof(struct node));
  temp->data = data;
  temp->left = NULL;
  temp->right = NULL;
  return temp;
}

void getMaxSum(struct node* root, int sum)
{
	if(root!=NULL)
	{
		sum=sum+root->data;
		if(sum>maxsum && root->left==NULL && root->right==NULL)
		{
			maxLeaf = root;
			maxsum = sum;
		}
			getMaxSum(root->left,sum);
			getMaxSum(root->right,sum);
	}
}

bool getPath(struct node* root, struct node* leaf)
{
	if(root==NULL)
		return false;
	if ((root == leaf) || getPath(root->left, leaf) ||getPath(root->right, leaf))
	{
		printf("%d  ",root->data);
		return true;
	}
		return false;
}

int main()
{
  struct node *root  = newNode(15);
  root->left         = newNode(10);
  root->right        = newNode(5);
  root->left->left   = newNode(6);
  root->left->right  = newNode(4);
  root->right->left = newNode(3);
  root->right->right = newNode(2);

  getMaxSum(root,0);
  printf("%d \n",maxsum);
  printf("path:");
  getPath(root,maxLeaf);
  return 0;
}
