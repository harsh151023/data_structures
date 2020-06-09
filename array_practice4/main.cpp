#include <iostream>

using namespace std;
int findele(int a[],int n){
int largest=a[0];
int element=0;
int flag=0;


for(int i=1;i<n;i++){
    if(a[i]>largest){
        largest=a[i];
    }
for(int j=i+1;j<n;j++){
    if(a[j]>largest){
        flag=1;
        break;
    }
}
if(flag=0)
    return largest;
}

}
int main()
{
    int arr[]={2,5,4,7,6,10,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<findele(arr,n);
}
