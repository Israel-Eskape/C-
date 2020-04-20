#include<iostream>
using namespace std;
const int TAMA = 5;
void burbuja(int []);
int main(){
	int vector[TAMA]={5,4,3,2,1};
	burbuja(vector);
	for(int i = 0;i<TAMA ;i++ )
		cout<<vector[i]<<" ";
	cout<<endl;
	return 0;
}
void burbuja(int vector[]){
	int aux;
	for(int i = 0;i<TAMA;i++){
		for(int j = 0;j<TAMA-i;j++)
			if(vector[j] > vector[j+1]){
				aux = vector[j];
				vector[j] = vector[j+1];
				vector[j+1] = aux;
			}
	}
}
