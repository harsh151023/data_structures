#include <bits/stdc++.h>

using namespace std;
void mergesortedarray(int arr1[],int arr2[],int arr3[]){

 int i = 0, j = 0, k = 0;


    while (i<n1 && j <n2)
    {

        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }


    while (i < n1)
        arr3[k++] = arr1[i++];

    while (j < n2)
        arr3[k++] = arr2[j++];
}
int main()
{
    int n,m;
    int a[n];
    int b[m];
    cin>>n;
    cin>>m;
    int c[n+m];
    for(int i=0;i<n;i++){
        cin>>a[n];
    }
    for(int i=0;i<n;i++){
        cin>>b[m];
    }

    mergesortedarray(a,b,c)
    return 0;
}
