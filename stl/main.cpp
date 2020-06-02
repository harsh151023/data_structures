#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr,arr+n);
    cout<<"vector is";
    for(int i=0;i<n;i++){
        cout<< vect[i];
    }
    sort(vect.begin(),vect.end());
    for(int i=0;i<n;i++){
        cout<< vect[i];
    }
    reverse(vect.begin(),vect.end());
    for(int i=0;i<n;i++){
        cout<< vect[i];
    }

    cout<<"max element is";
    cout<<*max_element(vect.begin(),vect.end());

    cout<<"min element is";
    cout<<*min_element(vect.begin(),vect.end());
   cout<<count(vect.begin(),vect.end(),20);
   find(vect.begin(),vect.end(),20)!=vect.end()?cout<<"element found":cout<<"element not found";

   all_of(arr,arr+n,[](int x){return x>0;})?cout<<"all are positive":cout<<"all are not positive";

    is_partitioned(vect.begin(), vect.end(), [](int x)
    {
        return x%2==0;

    })?

    cout << "Vector is partitioned":
    cout << "Vector is not partitioned";

    partition(vect.begin(), vect.end(), [](int x)
    {
        return x%2==0;

    });

    is_partitioned(vect.begin(), vect.end(), [](int x)
    {
        return x%2==0;

    })?

    cout << "Now, vector is partitioned after partition operation":
    cout << "Vector is still not partitioned after partition operation";
    cout << endl;

    cout << "The partitioned vector is : ";
    for (int &x : vect) cout << x << " ";

   list <int> list1,list2;
   for(int i=0;i<10;i++){
    list1.push_back(i*2);
    list2.push_front(i*3)
   }


    return 0;

}
