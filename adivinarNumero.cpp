//juego.cpp
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
int main()
{
	int num,res;
	srand(time(NULL));
	res = 1 + (rand() % 1000 );
	do
	{
		cout<<"Adivine el numero [1-1000] : ";
		cin>>num;
		if(num< res)
			cout<<"Demasiado bajo. Intente de nuevo"<<endl;
		if(num > res)
			cout<<"Demasiado alto. Intente de nuevo"<<endl;
	}while(num != res);
	cout<<"Felicidades. Adivino el numero";
}
