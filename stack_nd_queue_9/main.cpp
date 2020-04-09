//implememt queue using stacks
#include <iostream>

using namespace std;
stack<int> s1,s2;
void enqueue(int i){
if(s1.empty()){
    s1.push(i);
    }
    else{

        while(!s1.empty()){
            s2.push(s1.top);
            s1.pop();
        }
        s1.push(i);
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }
}

void dequeue(){
 if (s1.empty()) {
            cout << "Q is Empty";
            exit(0);
        }
        int x = s1.top();
        s1.pop();
        return x;
}



int main()
{
enqueue(1);
enqueue(2);
enqueue(3);
enqueue(4);
cout<<dequeue(4);



}
