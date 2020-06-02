#include <bits/stdc++.h>

using namespace std;
struct node{
int data;
struct node*next;
};

struct node *newnode(int data){
struct node *t=(struct node*)malloc(sizeof(struct node));
t->data=data;
t->next=NULL;
return t;
};


struct node *reversell(struct node *t,int k){
struct node*t1=t;
struct node*t2=t;
struct node*head=NULL;
struct node *last=NULL;
int count2=0,count1=0;
while(t2!=NULL){
        t2=t2->next;
        count1++;
if(count1==k-1){
        count2=count2+1;
        struct node*t5=t2;
        t2=t2->next;
        t5->next=NULL;
        node*current = t1;
        node*prev = NULL;
        node*next = NULL;

        while (current != NULL) {
            next = current->next;
            current->next = prev;
             prev = current;
            current = next;
        }
        t1 = prev;

       if(count2==1){
        head=t1;
        }
        if(count2>1){
            last->next=t1;
        }
        struct node*t3=t1;
        while(t3->next!=NULL){
            t3=t3->next;
        }
        last=t3;
        t1=t2;
        count1=0;
        }
}
if(t1!=NULL){
    last->next=t1;}
 return head;

}

int main()
{
    struct node *head=newnode(1);
    head->next=newnode(2);
    head->next->next=newnode(3);
   head->next->next->next=newnode(4);
    head->next->next->next->next=newnode(5);
    head->next->next->next->next->next=newnode(6);
    int k=3;
    head=reversell(head,k);
    struct node*t4=head;
   while(t4){
    cout<<t4->data;
    t4=t4->next;
     }
    return 0;
}
