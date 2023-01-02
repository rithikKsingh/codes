#include <iostream>
using namespace std;

void merge(int* arr, int s, int e)
{
	int mid = (s + e) / 2;
	
	int len1 = mid - s + 1;
	int len2 = e - mid;
	
	int* first = new int[len1];
	int* second = new int[len2];

	int k = s;
	for (int i = 0; i < len1; i++)
	{
		first[i] = arr[k++];
	}
	k = mid + 1;
	for (int i = 0; i < len2; i++)
	{
		second[i] = arr[k++];
	}
	int index1 = 0, index2 = 0;
	// merge two arrays
	k = s;
	while (index1 < len1 && index2 < len2) {
		if (first[index1] > second[index2])
			arr[k++] = second[index2++];
		else 
			arr[k++] = first[index1++];
	}
	while (index1 < len1) {
		arr[k++] = first[index1++];
	}

	while (index2 < len2) {
		arr[k++] = second[index2++];
	}
	delete[] first;
	delete[] second;

}
void mergesort(int* arr, int s, int e) {
	if (s >= e) {
		return;
	}
	int mid = (s + e) / 2;

	//left part sort
	mergesort(arr, s, mid);
	
	//right part sort
	mergesort(arr, mid + 1, e);
	
	//merging sorted array
	merge(arr, s, e);
}
int main()
{
	int arr[6]{ 9,3,2,4,1,1 };
	int n = sizeof(arr) / sizeof(int);
	mergesort(arr, 0, n - 1);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

