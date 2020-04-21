//recursividad.cpp

#include <iostream>

using namespace std;

void hanoi(int n,int ori,int des,int aux);

int main(){
       int n;
       cout<<"Introduce el numero de discos: ";
       cin>>n;
       hanoi(n,1,3,2);
       system ("pause");
       return 0;
}

void hanoi(int n,int ori,int des,int aux){
     printf("%d %d %d %d \n",n,ori,des,aux);
     if(n==1)
         cout<<"mueve de "<<ori<< " a "<< des <<endl;
     else{
          hanoi(n-1,ori,aux,des);
          cout<<"mueve de "<<ori<< " a "<< des <<endl;
          hanoi(n-1,aux,des,ori);
     }
}     
