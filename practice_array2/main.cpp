#include <iostream>

using namespace std;

int mergesort(int arr[],int array_size){
int temp[arr_size];
return _mergesort(arr,temp.0,array_size-1);
}
int _mergesort(int arr[],int temp[],int left,int right){
int mid ,inv_count=0;
if(right>left){
    mid=(right+left)/2;

}
}
int main()
{
    int arr[]={1.20.6.4.5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans =mergesort(arr,n);
    cout<<"number of inversion are"<<ans;
    return 0;
}
