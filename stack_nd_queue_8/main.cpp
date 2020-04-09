//maximum area in histogram
#include <bits/stdc++.h>

using namespace std;

int getmaxarea(int hist[],int n){

stack<int> s;

int area;
int max_area=0;
int top;
int i,l=0;

while(i<n){

    if(s.empty()||hist[s.top()]<hist[i]){
        s.push(i++);
    }
    else{

        l=s.top();
        s.pop();
        area=hist[l]*(s.empty()?i:i-s.top-1);

          if (max_area < area)
                max_area = area;
    }
}
  while (s.empty() == false)
    {
        l = s.top();
        s.pop();
        area = hist[l] * (s.empty() ? i :
                                i - s.top() - 1);

        if (max_area < area)
            max_area = area;
    }

    return max_area;
}

}

int main()
{
    int hist[6]={6,2,5,4,5,6};
    int n=sizeof(hist)/sizeof(hist[0]);
    cout<<"maximum area is"<<getmaxarea(hist,n);
    return 0;
}
