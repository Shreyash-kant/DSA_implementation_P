#include<iostream>
using namespace std;
void swap(int *p,int *q){
	int temp=*p;
	*p=*q;
	*q=temp;
}
void BubbleSort(int arr[], int n){
	for(int i=0;i<n-1;++i){
		bool swapElements=false;
		for(int j=0;j<n-1-i;++j){
			if(arr[j]>arr[j+1]){
			swap((arr+j),(arr+j+1));
			swapElements=true;	
			}
			
		}
		if(swapElements==false)
		break;
	}
	cout << "sorted array:";
	for(int i=0;i<n;++i)
	cout << arr[i] << " ";
}
int main(){
	int arr[10] = {1,2,3,3,5,9,7,6,8,67};
	BubbleSort(arr,10);
	return 0;
}
