//secuencial.cpp
#include<iostream>
int lineal(int *,int );
using namespace std;
const int TAMA = 6;
int main(){
	int A[]={6,5,4,23,2,1};
	int valor = 4;
	if(lineal(A,valor) == -1)
		cout<<"No se encontrado \n";
	else
		cout<<"Encontrado\n";
}
int lineal(int *A,int valor){
	for(int i =0;i<TAMA;i++){
		if(valor == A[i])
			return i;
	}
	return -1;
}
