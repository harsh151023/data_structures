#include <iostream>

using namespace std;
void reverse(char* begin, char* end)
{
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

void reverseword(char*s){
char*word_begin=s;
char*temp=s;
while(*temp){
    temp++;
    if(*temp=='\0'){
        reverse(word_begin,temp-1);
    }
    else if(*temp==' '){
        reverse(word_begin,temp-1);
        word_begin=temp+1;
        }

}
reverse(s,temp-1);
}
int main()
{
    char s[]="i like this program very much";
    char*temp=s;
    reverseword(s);
   cout<<s;
    return 0;
}
