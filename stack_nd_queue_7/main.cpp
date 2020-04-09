#include <bits/stdc++.h>


using namespace std;
queue<int> q1,q2;

void push1(int x){
q2.push(x);
while(!q1.empty()){
    q2.push(q1.front());
    q1.pop();
}
    queue<int> q=q1;
    q1=q2;
    q2=q;

}
 void pop1()
    {
        if (q1.empty())
            return;
        q1.pop();

    }
    int top()
    {
        if (q1.empty())
            return -1;
        return q1.front();
    }
int main()
{
  push1(1);
  push1(2);
  push1(3);
  cout <<top() << endl;
  pop1();
  cout <<top() << endl;
  pop1();
   return 0;
}
