/*Design a stack such that getMinium() should be O(1) time and O(1) space*/

#include <iostream>
#include <limits.h>

using namespace std;
    int minele = INT_MAX;
    int stack[10];
    int top=-1;

    int isempty(int top)
    {
    return((top)==-1);
    }

    void getminimum(){
    printf("minimum is %d",minele);
    }

    int pop(){
    int element;
    if(!isempty(top)){
        if(stack[top]<minele){

            minele=2*(minele)-stack[(top)];
            element =  (stack[top] + minele)/2;
        }
        else
            element=stack[top];
        top--;
        return element;
    }
    else{
        printf("stack is empty");
        return -1;

    }
    }
void push(int num)
{
	if((minele) > num)
	{
		if(top == -1)
			stack[++top] = num;
		else
			stack[++top] = ((2*num)-minele);
	    minele = num;
	}
	else if((minele <= num))
		stack[++(top)] = num;
}

void display()
{
	for(int i=(top); i>=0; i--)
		printf("%d\n", stack[i]);
}

int main()
{
	int ele;
	push(2);
    push(1);
    getminimum();
    ele = pop();
    printf("Popped element from stack is = %d\n", ele);
    ele = pop();
    printf("Popped element from stack is = %d\n", ele);
    getminimum();
    return 0;
}
