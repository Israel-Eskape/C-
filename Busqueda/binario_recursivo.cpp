//binario_recursivo.cpp
#include<iostream>
using namespace std;
int TAMA= 6;
void quicksort(int [],int,int);
int partition(int [],int ,int );
int busqueda(int [],int ,int,int);
int main(){
	int vector[]={3,55,77,2,1,10};	
	int valor= 10;
	
	quicksort(vector,0,TAMA-1);	

	if(busqueda(vector,valor,0,TAMA) == -1)
		cout<<"No encontrado"<<endl;
	else
		cout<<"Encontrado"<<endl;
		
	return 0;
}

int busqueda(int A[],int valor,int inf,int sup){
	int centro;
	if(sup < inf)
		return -1;
	 centro = inf + (sup - inf)/2;
	if (A[centro] > valor)
		return busqueda(A,valor,inf,centro-1);
	else
		if(A[centro] < valor)
			return busqueda(A,valor,centro+1,sup);
		return centro;
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
