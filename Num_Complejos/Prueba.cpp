#include<iostream>
#include"complejo.cpp"
using namespace std;
int main(){
	Complejo a;
	Complejo b;
	Complejo c;

	c.print();
	a.setComplejo(9,9);
	b.setComplejo(1,1);
	
	c = a.Suma(b);
	c.print();
	c.setComplejo(1,1);
	a = a.Suma(c,b);
	a.print();
	a = a.Suma(c,5);
	a.print();
	
	c = a.Producto(b);
	c.print();
	
	a = a.Producto(c,b);
	a.print();
	
	a = a.Producto(c,10);
	a.print();
}
