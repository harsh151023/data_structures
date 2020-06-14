#include <iostream>

using namespace std;
void remove(char *str){
str++;
}
int main()
{
    char str1[] = "geeksforgeeg";
    remove(str1);
    cout<<str1;
    return 0;
}
