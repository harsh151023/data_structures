#include <bits/stdc++.h>

using namespace std;


struct node{
int data;
struct node*left;
struct node *right;
};

struct node*newnode(int data){
    struct node*t=(struct node*)malloc(sizeof(struct node));
    t->data=data;
    t->left=NULL;
    t->right=NULL;
    return t;
};

int lowestcommonancestor(struct node *t,int a,int b){
    if(t==NULL)
        return 0;

    if(t->data<a && t->data<b){
        return lowestcommonancestor(t->right,a,b);
    }

    if(t->data>a && t->data>b){
        return lowestcommonancestor(t->left,a,b);
    }
    return t->data;
}

int main()
{
    struct node*root         = newnode(20);
    root->left               = newnode(8);
    root->right              = newnode(22);
    root->left->left         = newnode(4);
    root->left->right        = newnode(12);
    root->left->right->left  = newnode(10);
    root->left->right->right = newnode(14);
    cout<<lowestcommonancestor(root,10,14);
    return 0;
}
