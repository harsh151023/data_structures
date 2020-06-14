#include <bits/strdc++.h>

using namespace std;
void printSubStr(char* str, int low, int high)
{
    for( int i = low; i <= high; ++i )
        cout << str[i];
}
int longestpalsubstr(char*str){
int maxlength=1;
int strat=0;
int low,high;
int len=strlen(str);
for (int i = 1; i < len; ++i)
    {

        low = i - 1;
        high = i;
        while (low >= 0 && high < len && str[low] == str[high])
        {
            if (high - low + 1 > maxLength)
            {
                start = low;
                maxLength = high - low + 1;
            }
            --low;
            ++high;
        }
        low = i - 1;
        high = i + 1;
        while (low >= 0 && high < len && str[low] == str[high])
        {
            if (high - low + 1 > maxLength)
            {
                start = low;
                maxLength = high - low + 1;
            }
            --low;
            ++high;
        }
    }

    cout<<"Longest palindrome substring is: ";
    printSubStr(str, start, start + maxLength - 1);

    return maxLength;

}
int main()
{
    char str[]="forgeeksskeegfor";
    cout<<longestpalsubstr(str);
    return 0;
}
