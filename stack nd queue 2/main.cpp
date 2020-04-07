#include <iostream>
#define STACKSIZE 100

using namespace std;

struct stack{
int top;
int items[STACKSIZE];
};

void push(struct stack *ps,int x){
if(ps->top==STACKSIZE-1){
    printf("stack is full");
    exit(0);
}
else{

    ps->top+=1;
    int top=ps->top;
    ps->item[top]=x;
}

}
int isempty(struct stack *ps)
{
    return (ps->top == -1)? 1 : 0;
}
int pop(struct stack *ps)
{
    int temp;
    if (ps->top == -1)
    {
        printf("Error: stack underflow n");
        exit(0);
    }
    else
    {
        int top = ps->top;
        temp = ps->items [top];
        ps->top -= 1;
        return temp;
    }
}
void greaterelement(int *arr,int n){
int i =0;
struct stack s;
s.top=-1;
int element ,next;

push(&s,arr[0]);
for(i=1;i<n;i++){

    next=arr[i];
    if(!isempty(&s){
       element=pop(&s);

       while(element<next){
        printf("%d----->%d",element,next);
        if(isempty(&s))
            break;
        element=pop(&s);
       }
       if(element>next)
        push($&s,element);
       }
      push(&s,next);
}
 while(!isempty(&s))
    {
        element = pop(&s);
        next = -1;
        printf("\n%d --> %d", element, next);
    }

}
int main()
{
    int arr[]={4,5,2,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    nextgreaterelement(arr,n);
    return 0;
}
