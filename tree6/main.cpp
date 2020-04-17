#include <stdio.h>

// Function to reverse a given sub-array
void reverse(int A[], int low, int high)
{
	for (int i = low, j = high; i < j; i++, j--)
	{
		int temp = A[i];
		A[i] = A[j];
		A[j] = temp;
	}
}

// Function to right rotate an array by k positions
void rightRotate(int A[], int k, int n)
{
	// Reverse the last 'k' elements
	reverse(A, n-k, n-1);

	// Reverse the first 'n-k' elements
	reverse(A, 0, n-k-1);

	// Reverse the whole array
	reverse(A, 0, n-1);
}

// main function
int main(void)
{
	int A[] = { 1, 2, 3, 4, 5, 6, 7 };
	int k = 3;

	int n = sizeof(A)/sizeof(A[0]);

	rightRotate(A, k, n);

	for (int i = 0; i < n; i++)
		printf("%d ", A[i]);

	return 0;
}
