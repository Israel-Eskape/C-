//binario.cpp
#include<iostream>
using namespace std;
int TAMA= 6;
void quicksort(int [],int,int);
int partition(int [],int ,int );
int busqueda(int [],int );
int main(){
	int vector[]={3,55,77,2,1,0};	
	int valor= 0;

	if(busqueda(vector,valor) == -1)
		cout<<"No encontrado"<<endl;
	else
		cout<<"Encontrado"<<endl;
		
	return 0;
}
int busqueda(int vector[],int valor){
	int n =TAMA;
	quicksort(vector,0,n);

	int centro,inf = 0,sup =n-1;
	
	while(inf <= sup ){
		centro = (sup + inf )/2;
		if(vector[centro] == valor)
			return centro;
		else
			if(valor < vector[centro])
				sup = centro -1;
				inf = centro+1;
	}
	return -1;
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
