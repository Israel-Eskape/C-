//convertir.cpp
#include<iostream>
using namespace std;

float fahrenheit(float );
float centigrados(float );
int main()
{
	float grados,f,c;//f=fahrenheit,c=centigrados
	int opcion;
	cout<<"\tConvertidor\n1.- De centigrados a fahrenheit\n2.- De fahrenheit a centigrados "<<endl;
	cout<<"\ningrese la opcion : "; cin>>opcion;
	cout<<"ingrese los grados a convertir\n Grados : ";cin>>grados;
	switch(opcion)
	{
		case 1:
			cout<<"f = " <<fahrenheit(grados) << endl;
			break;
		case 2:
			cout<<"c= " <<centigrados(grados) <<endl;
			break;
		default:
			cout<<"opcion incorrecta"<<endl;
	}
}
float fahrenheit(float grados)
{
	return (5.0f/9.0f)*(grados-32);
}
float centigrados(float grados)
{
	return (9.0f/5.0f) * (grados + 32);
}
