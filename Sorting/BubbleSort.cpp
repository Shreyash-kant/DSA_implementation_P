#include<iostream>
using namespace std;
void swap(int *p,int *q){
	int temp=*p;
	*p=*q;
	*q=temp;
}
void BubbleSort(int arr[], int n){
	for(int i=0;i<n-1;++i){
		for(int j=0;j<n-1-i;++j){
			if(arr[j]>arr[j+1])
			swap((arr+j),(arr+j+1));
		}
	}
	cout << "sorted array:";
	for(int i=0;i<n;++i)
	cout << arr[i] << " ";
}
int main(){
	int arr[10] = {1,34,56,3,5,9,2,7,6,8};
	BubbleSort(arr,10);
	return 0;
}
