#include<iostream>
using namespace std;
void display(int arr[], int n){
	for(int i=0;i<n;++i)
	cout << arr[i] << " ";
}
void insetion(int arr[], int n){
	for(int i=1;i<n;++i){
		int key=arr[i];
		int j=i-1;
		while(j>=0&&arr[j]>key){
			arr[j+1]=arr[j];
			--j;
		}
		arr[j+1] = key;
	}
}
int main(){
	int arr[10] = {9,7,6,5,4,3,2,167,2,24};
	insetion(arr,10);
	display(arr,10);
	return 0;
}
