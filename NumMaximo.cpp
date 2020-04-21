//maximo.cpp

#include <iostream>
using namespace std;

float maxi(float x, float y, float z);

main(){
   int a,b,c;
   cout<<"Introduce 3 enteros: ";
   cin>>a>>b>>c;
   cout<<"max["<<a<<","<<b<<","<<c<<"]="<<maxi(a,b,c)<<endl;
   return 0;
}

float maxi(float x,float y,float z){
   return x>y?(x>z?x:z):(y>z?y:z);
}

