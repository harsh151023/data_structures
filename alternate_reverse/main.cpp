
#include <bits/stdc++.h>
using namespace std;


void rearrange(int arr[], int n)
{

	int max_idx = n - 1, min_idx = 0;


	int max_elem = arr[n - 1] + 1;


	for (int i = 0; i < n; i++) {

		if (i % 2 == 0) {
			arr[i] += (arr[max_idx] % max_elem) * max_elem;
			max_idx--;
		}


		else {
			arr[i] += (arr[min_idx] % max_elem) * max_elem;
			min_idx++;
		}
	}


	for (int i = 0; i < n; i++)
		arr[i] = arr[i] / max_elem;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Original Arrayn";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	rearrange(arr, n);

	cout << "\nModified Array\n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}
