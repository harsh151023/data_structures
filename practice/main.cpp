//triplet with sum
#include <bits/stdc++.h>
using namespace std;
long int findtriplet(arr[],int n){
    sort(arr,arr+n);
    long int t=0;
    for(int i=n-1;i<=0;i--){
        int j=0;
        int k=i-1;
    }
    while (j < k)
		{
			if (arr[i] == arr[j] + arr[k])
			  {t++;j++;k--;}
			else if (arr[i] > arr[j] + arr[k])
				j++;
			else
				k--;
		}

}
int main() {
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
long int ans=findtriplet(arr,n);
if(ans){
    cout<<ans<<endl;
}
else{
    cout<<-1<<endl;
}
	return 0;
}
