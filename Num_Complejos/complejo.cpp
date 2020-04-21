#include<iostream>
#include<cmath>
#include "complejo.h"
#include<iomanip>
using namespace std;

Complejo :: Complejo(){
	setComplejo(0,0);
}
void Complejo :: setComplejo(int r,int i){
	real = r;
	imaginario = i;
}
void Complejo :: print(){
	if(imaginario == 0 && real != 0)
		cout<<real<<endl;
	if(imaginario != 0 && real == 0)
		cout<<imaginario<<"i"<<endl;
	if(imaginario == 0 && real == 0)
		cout<<"0"<<endl;
	if(imaginario >= 0)
		cout<<real<<" + "<<imaginario<<"i"<<endl;
	else
		cout<<real<<" "<<imaginario<<"i"<<endl;
}
Complejo Complejo :: Suma (Complejo c1){
	Complejo aux;
	aux.real = real + c1.real;
	aux.imaginario = imaginario + c1.imaginario;
	return aux;
}
Complejo Complejo :: Suma(Complejo c1,Complejo c2){
	Complejo aux;
	aux.real = c1.real + c2.real;
	aux.imaginario = c1.imaginario + c2.imaginario;
	return aux;
}
Complejo Complejo :: Suma(Complejo c1,int c2){
	Complejo aux;
	aux.real = c1.real + c2;
	aux.imaginario = c1.imaginario;
	return aux;
}
Complejo Complejo :: Producto(Complejo c1){
	Complejo aux;
	aux.real = real * c1.real;
	aux.imaginario = imaginario * c1.imaginario;
	return aux;
}
Complejo Complejo :: Producto(Complejo c1,Complejo c2){
	Complejo aux;
	aux.real = c1.real * c2.real;
	aux.imaginario = c1.imaginario * c2.imaginario;
	return aux;
}
Complejo Complejo :: Producto(Complejo c1,int c2){
	Complejo aux;
	aux.real =c1.real * c2;
	aux.imaginario = c1.imaginario ;
	return aux; 
}
Complejo Complejo :: Sqrt(){
	return math.sqrt(real * real + imaginario * imaginario);
}
Complejo Complejo :: Sqrt(Complejo c1){
	return math.sqrt(c1.real * c1.real + c1.imaginario * c1.imaginario );
}
Complejo Complejo :: Abs(){
	Complejo aux;
	aux.real = math.abs(real);
	return aux;
}
Complejo Complejo :: Abs(Complejo c1){
	Complejo aux;
	aux.real = math.abs(c1.real);
}
double Complejo :: Fase(){
	double angulo = math.atan2(imaginario,real);
	if(angulo < 0 )
		angulo += 2 * math.PI ;
	return angulo *180 /math.PI;
}
double Complejo :: Fase(Complejo c1){
	double angulo = math.atan2(c1.imaginario ,c1.real);
	if(angulo < 0 )
		angulo += 2*math.PI;
	return angulo * 180 / math.PI;	
}
