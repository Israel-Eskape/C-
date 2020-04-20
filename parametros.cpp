//parametros.cpp
#include<iostream>
using namespace std;
void por_valor(int );
void por_Apuntador(int *);
void por_Referencia(int &);

main()
{
    int a=5;
    cout<<a<<endl;
    por_valor(a);
    cout<<a<<endl;
    por_Apuntador(&a);
    cout<<a<<endl;
    por_Referencia(a);
    cout<<a<<endl;
    
    int *p;
    p=&a;
    *p=5;
    cout<<a<<endl;
    por_valor(*p);
    cout<<a<<endl;
    por_Apuntador(p);
    cout<<a<<endl;
    por_Referencia(*p);
    cout<<a<<endl;
    
    int &r1=a;
    r1=5;
    cout<<"-->\n"<<a<<endl;
    por_valor(r1);
    cout<<a<<endl;
    por_Apuntador(&r1);
    cout<<a<<endl;
    por_Referencia(r1);
    cout<<a<<endl;
    
    *p=5;
    por_valor(r1 + (*p) + a);
    cout<<a<<endl;
    por_Apuntador(&*p);//
    cout<<*p<<endl;//
    por_Referencia(*&r1);
    cout<<*&r1<<endl;
    
	   return 0;    
}
void por_valor(int v){
    v*=2;
    cout<<v<<endl;
}
void por_Apuntador(int *p){
    *p *=2;
    cout<<*p<<endl;
}
void por_Referencia(int &r){
    r*=2;
    cout<<r<<endl;
}
