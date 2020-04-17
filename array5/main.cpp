// split-array-two-equal-sum-subarrays
using namespace std;


int findSplitPoint(int arr[], int n)
{

    int leftSum = 0;
    for (int i = 0 ; i < n ; i++)
        leftSum += arr[i];


    int rightSum = 0;
    for (int i=n-1; i >= 0; i--)
    {

        rightSum += arr[i];


        leftSum -=  arr[i] ;

        if (rightSum == leftSum)
            return i ;
    }


    return -1;
}
int main()
{
    int arr[] = {1 , 2 , 3 , 4 , 5 , 5 };
    int n = sizeof(arr)/sizeof(arr[0]);
    printTwoParts(arr, n);
    return 0;
}
