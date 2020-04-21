//mcd.cpp
#include<iostream>
using namespace std;
int mcd(int ,int );
int main()
{
	int num1,num2;
	cout<< "ingrese un numero : ";cin>>num1;
	cout<<" ingrese otro numero : ";cin>>num2;
	cout<<"El MCD de "<<num1<<" y "<<num2<<" Es "<<mcd(num1,num2)<<endl;
}
int mcd(int num1,int num2){
	if(num2 == 0) 
		return num1;
	return mcd(num2,num1 % num2);
}
