#include<iostream>
using namespace std;
const int TAMA = 5;
void quicksort(int [],int ,int);
int partition(int [],int p,int );

int main(){
	int arr[TAMA]={1,55,1,4,2};
		
	quicksort(arr,0,TAMA-1);
	
	for(int i =0; i < TAMA;i++)
		cout<<arr[i]<<" ";
	cout<<endl;	
}
void quicksort(int A[],int p,int r){
	int q;
	if(p < r){
		q = partition(A,p,r);
		quicksort(A,p,q-1);
		quicksort(A,q+1,r);
	}
}
int partition(int A[],int p,int r){
	int x = A[r];
	int i = p-1;
	int aux;
	for(int j = p ;j <= r-1;j++)
	{
		if(A[j] <= x)
		{
			i = i+1;
			aux = A[i];
			A[i] = A[j];
			A[j] = aux;
		}
	}
	aux = A[i+1];
	A[i+1] = A[r];
	A[r] = aux;
	
	return i+1;
}
