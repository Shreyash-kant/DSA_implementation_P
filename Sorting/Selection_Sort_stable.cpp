#include<iostream>
using namespace std;
//time complexity of selection sort is O(n^2)
//selection sort is an unstable sorting algorithm
//any unstable comparison based sorting algorithm can be modified to stable sorting algoritm by the comparison of same key positions
//here we can shift elements to the right to left the place free for the smalled(or largest) element in unsorted array
//here we are using the concept of insertion sort to place an element to its actual position 
void display(int arr[], int n){
	for(int i=0;i<n;++i)
	cout << arr[i] << " ";
}
void selection(int arr[], int n){
	for(int i=0;i<n-1;++i){
		int min_index = i;
		for(int j=i+1;j<n;++j){
			if(arr[min_index]>arr[j])
			min_index=j;
		}
		int key = arr[min_index];
		for(int p=min_index;p>i;--p){
			arr[p]=arr[p-1];
		}
		arr[i]=key;
	}
}
int main(){
	int arr[10] = {9,7,6,5,4,3,2,167,2,24};
	selection(arr,10);
	display(arr,10);
	return 0;
}
