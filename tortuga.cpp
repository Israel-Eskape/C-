#include<iostream>
using namespace std;
int derecha(int );
int izquierda(int );
void getcomands(int [][2]);
void mover(int abajo,int a[][20],int direccion,int distancia);
void imprime(int [][20]);

int main(){
	int piso[20][20]={0},opcion,direccion = 0,comandoarreglo[100][2] = {0},distancia,count = 0;
	bool plumaabajo = false;
	
	getcomands(comandoarreglo);
	opcion = comandoarreglo[count][0];
	while(opcion != 9){
		switch(opcion){
			case 1:
				plumaabajo= false;
				break;
			case 2:
				plumaabajo=true;
				break;
			case 3:
				direccion = derecha(direccion);
				break;
			case 4:
				direccion = izquierda(direccion);
				break;
			case 5:
				distancia = comandoarreglo[count][1];
				mover(plumaabajo,piso,direccion,distancia);
				break;
			case 6:
				cout<<"\nlo que hizo es : \n\n";
				imprime(piso);
				break;
		}
		opcion = comandoarreglo[++count][0];
	}
	return 0;
}
void getcomands(int comando[][2]){
	int tem,i;
	cout<<"ingresa un comando (9 para salir ) : ";
	cin>>tem;
	for(i=0;tem != 9 && i<100;++i){
		comando[i][0] = tem;
		if(tem == 5 ){
		cin.ignore();
		cin>>comando[i][1];
		}
		cout<<"ingresa un comando (9 para salir ) : ";
		cin>>tem;
	}
	comando[i][0] = 9;
}
int derecha(int d){
	return ++d > 3 ? 0 : d ;
}
int izquierda(int d){
	return --d < 0 ? 3 : d;
}
void mover(int abajo,int a[][20],int direccion,int distancia){
	int xpos = 0,ypos=0;
	int j;
	switch (direccion){
		case 0:
			for(j =1;j<= distancia && ypos+j < 20;j++)
				if(abajo)
					a[xpos][ypos+j] = 1;
			ypos += j-1;
			break;
		case 1:
			for(j = 1;j<= distancia && xpos+j < 20;j++)
				if(abajo)
					a[xpos + j][ypos]=1;
			xpos += j-1;
			break;
		case 2:
			for(j = 1;j<= distancia && ypos -j >= 0;j++)
				if(abajo)
					a[xpos][ypos-j] = 1;
			ypos -= j-1;
			break;
		case 3:
			for(j = 1;j<= distancia && xpos-j >= 0;j++)
				if(abajo)
					a[xpos-j][ypos] = 1;
			xpos -=j-1;
			break;			
	}
}
void imprime(int a[][20]){
	for(int i=0;i<20;++i){
		for(int j = 0;j< 20;++j)
			if(a[i][j] == 1)
				cout<<"*";
			else
				cout<<" ";
			
	cout<<endl;
	}
}
