#include<bits/stdc++.h>

bool pythagorastriplet(int arr,int n){
int maximum=0;
for(int i=0;i<n;i++){
    maximum=max(maximum,arr[i]);
}
hash[maximum+1]={0};

for(int i=0;i<n;i++){
    hash[arr[i]]++;
}
for (int i = 1; i < maximum + 1; i++) {


        if (hash[i] == 0)
            continue;

        for (int j = 1; j < maximum + 1; j++) {
            if ((i == j && hash[i] == 1) || hash[j] == 0)
                continue;
            int val = sqrt(i * i + j * j);
            if ((val * val) != (i * i + j * j))
                continue;
            if (val > maximum)
                continue;
            if (hash[val]) {
                return true;
            }
        }
    }
    return false;

}
int main(){
int a[]={3, 2, 4, 6, 5 };
int n=sizeof(a)/sizeof(a[0]);
cout<<pythgorastriplet(arr,n);
}
