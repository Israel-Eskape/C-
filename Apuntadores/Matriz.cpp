#include<iostream>
using namespace std;
int **inicializaMatriz(int ,int );
void printMatriz(int **,int ,int );
void leeMatriz(int **,int ,int );
void duplicaMatriz(int **,int ,int );
int maxiMatriz(int ** ,int ,int );
void liberaMatriz(int ***,int);
int main(){
	int **vec,renglon,columna;
	cout<<"ingresa el tamaño de la matriz por renglones y columnas ";
	cin>>renglon>>columna;
	
	vec =inicializaMatriz(renglon,columna);
	printMatriz(vec,renglon,columna);
	leeMatriz(vec,renglon,columna);
	printMatriz(vec,renglon,columna);
	cout<<"El maximo = "<<maxiMatriz(vec,renglon,columna)<<endl;
	cout<<"la suma de las matrices \n";
	int r,c;
	cout<<"ingrese el tamano por renglones y columnas de la nueva matriz ";
	cin>>r>>c;
	int **vec2 = inicializaMatriz(r,c);
	leeMatriz(vec2,r,c);
	printMatriz(vec2,r,c);

	duplicaMatriz(vec,renglon,columna);
	printMatriz(vec,renglon,columna);
	liberaMatriz(&vec,renglon);
	return 0;
}
int **inicializaMatriz(int renglon,int columna){
	int **p = new int *[renglon];
	int i,j;	
	for(i=0;i<renglon;i++)
		p[i] = new int [columna];	
	for(i=0;i<renglon;i++){
		for(j=0;j<columna;j++)
			p[i][j] = 0;
	}
	return p;
}
void printMatriz(int **vec,int renglon,int columna){
	for(int i=0;i<renglon;i++){
		for(int j=0;j<columna;j++)
			cout<<vec[i][j]<<" ";
		cout<<endl;		
	}
	cout<<endl;
} 
void leeMatriz(int **vec,int renglon,int columna){
	for(int i=0;i<renglon;i++){
		for(int j=0;j<columna;j++){
			cout<<"a["<<i<<"]["<<j<<"] = ";
			cin>>vec[i][j];
		}
	}
}
void duplicaMatriz(int **vec,int renglon,int columna){
	for(int i=0;i<renglon;i++){
		for(int j=0;j<columna;j++)
			vec[i][j] *= 2;
	}
}
int maxiMatriz(int **vec,int renglon,int columna){
	int maxi = vec[0][0];
	for(int i=0;i<renglon;i++){
		for(int j=0;j<columna;j++)
		{
			if(maxi < vec[i][j])
				maxi = vec[i][j];
		}
	}
	return maxi;
}

void liberaMatriz(int ***vec,int renglon){
	int i;
	for(i=0;i<renglon;i++)
		delete [] (*vec)[i];
	delete []*vec;
	*vec = NULL;
}

