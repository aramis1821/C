// C++ program for insertion sort 

#include <bits/stdc++.h> 
using namespace std; 


void insertionSort(int arr[], int n) { 
	int key, j; 
	for (int i=1; i<n; i++) { 
		key = arr[i]; 
		j = i-1; 

		while (j >= 0 && arr[j] > key) { 
			arr[j + 1] = arr[j]; 
			j = j-1; 
		} 
		arr[j+1] = key; 
	} 
} 


void printArray(int arr[], int n) { 

	for (int i=0; i < n; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 


int main() { 
	int arr[] = { 12, 101, 13, 15, 6, 0, -9 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	insertionSort(arr, n); 
	printArray(arr, n); 

	return 0; 
} 


