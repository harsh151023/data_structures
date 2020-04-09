#include <bits/stdc++.h>

using namespace std;

struct node {
int data;
struct node*left;
struct node*right;
};
queue<struct node *> q1;
void levelorder(struct node *q){
cout<<"level order traversal is";
cout<<q->data;
q1.push(q->left);
q1.push(q->right);
while(!q1.empty()){
        struct node*node1= q1.front();
        cout<<node1->data;
        if(node1->left!=NULL)
        q1.push(node1->left);
        if(node1->right!=NULL)
        q1.push(node1->right);
        q1.pop();
    }
}

struct node *newnode(int data){
struct node *t=(struct node*)malloc(sizeof(struct node));
t->left=NULL;
t->right=NULL;
return t;
}
int main()
{
struct node *root;
root=newnode(1);
root->left->data=2;
root->right->data=3;
root->left->left->data=4;
root->left->right->data=5;
levelorder(root);

}
