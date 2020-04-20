//secuencial_recursica.cpp
#include<iostream>
using namespace std;
const int TAMA =6;
int recursiva(int *,int ,int);
int main()
{
	int a;
	int vector[] = {66,2,4,5,2,1};
	int valor = 66;
	
	if(recursiva(vector,TAMA-1,valor) == -1)
		cout<<"No encontrado\n";
	else
		cout<<"Encontrado\n";
	
}
int recursiva(int *A,int n,int x)
{
	if(n == 0 && A[n] != x)
		return -1;
	else
		if(A[n] == x)
			return n;
		else
			return recursiva(A,n-1,x);
}
