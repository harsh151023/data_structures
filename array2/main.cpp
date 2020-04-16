//nversion in array
#include <iostream>

using namespace std;
int mergesort(int arr[],int arr_size){

int *temp=(int *)malloc(sizeof(int)*arrsize);
return _mergesort(arr,temp,0,array_size-1);
}
int _mergesort(int arr[]int temp[],int left,int right){
 int mid, inv_count = 0;
    if (right > left) {
            mid = (right + left) / 2;
  inv_count = _mergeSort(arr, temp, left, mid);
  inv_count += _mergeSort(arr, temp, mid + 1, right);
  inv_count += merge(arr, temp, left, mid + 1, right);
    }
return inv_count;
}
int merge(int arr[], int temp[], int left, int mid, int right)
{
    int i, j, k;
    int inv_count = 0;

    i = left; /* i is index for left subarray*/
    j = mid; /* j is index for right subarray*/
    k = left; /* k is index for resultant merged subarray*/
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];

            /*this is tricky -- see above explanation/diagram for merge()*/
            inv_count = inv_count + (mid - i);
        }
    }

    /* Copy the remaining elements of left subarray
   (if there are any) to temp*/
    while (i <= mid - 1)
        temp[k++] = arr[i++];

    /* Copy the remaining elements of right subarray
   (if there are any) to temp*/
    while (j <= right)
        temp[k++] = arr[j++];

    /*Copy back the merged elements to original array*/
    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
}

int main()
{
    int arr[]={1,20,6,4,5};
    printf("Number of inversions are %d",mergasort(arr,5));
    return 0;
}
