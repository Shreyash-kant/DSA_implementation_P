#include<iostream>
using namespace std;
void swap(int *p,int *q){
	int temp = *p;
	*p = *q;
	*q = temp;
}
void display(int arr[], int n){
	for(int i=0;i<n;++i){
		cout << arr[i] << " ";
	}
}
void selection(int arr[], int n){
	for(int i=0;i<n-1;++i){
		int min_index = i;
		for(int j=i+1;j<n;++j){
		if(arr[min_index]>arr[j])
		min_index=j;
	}
	swap(&arr[min_index],&arr[i]);
	}

}
int main(){
	int arr[10] = {9,7,6,5,4,3,2,167,34,24};
	selection(arr,10);
	display(arr,10);
	return 0;
}
