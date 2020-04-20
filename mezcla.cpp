//mezclas.cpp
#include<iostream>
using namespace std;
void mezclasort(int *,int ,int);
void mezcla(int *,int,int ,int);
const int TAMA = 6;

int main(){
	int A[]={6,5,4,3,2,1};
	mezclasort(A,0,TAMA-1);
	for(int i=0;i< TAMA;i++)
		cout<<A[i]<<" ";
	cout<<endl;
}
void mezclasort(int *A,int p,int r){
	int q;
	if(p < r){
		q = (p+r)/2;
		mezclasort(A,p,q);
		mezclasort(A,q+1,r);
		mezcla(A,p,q,r);
	}
}
void mezcla(int *A,int p,int q,int r){
	int n1 = q-p+1;
	int n2 = r-q;
	int i,j;
	int arr1[n1+1],arr2[n2+1];
	
	for(i=0;i<= n1; i++)
		arr1[i] = A[p+i];
	
	for(j=0;j<=n1; j++)
		arr2[j] = A[q+j+1];

	arr1[n1] = 	1000000;
	arr2[n2] = 	1000000;

	i=0;
	j=0;

	for(int k =p;k<= r ;k++)
		if(arr1[i] <= arr2[j]){
			A[k] = arr1[i];
			i = i+1;
		}
		else{
			A[k] = arr2[j];
			j = j+1;
		}
}
