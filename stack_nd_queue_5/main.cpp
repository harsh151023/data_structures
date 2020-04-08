#include <iostream>
#include<stack>
using namespace std;
stack<char> s;
string ns;
void insertinbottom(char x){
if(s.empty()){
    s.push(x);
}
else{
    char y=s.top();
    s.pop();
    insertinbottom(x);
    s.push(y);

}
}
void reverse(){

if(s.size()>0){
    char x=s.top();
    s.pop();
    reverse();

    insertinbottom(x);
}
}

int main()
{
    s.push('1');
    s.push('2');
    s.push('3');
    s.push('4');

    cout<<"1"<<"2"<<"3"<<"4"<<endl;
    reverse();
    while(!s.empty())
    {
        char p=s.top();
        s.pop();
        ns+=p;
    }

    cout<<ns[3]<<" "<<ns[2]<<" "
        <<ns[1]<<" "<<ns[0]<<endl;
    return 0;
}
