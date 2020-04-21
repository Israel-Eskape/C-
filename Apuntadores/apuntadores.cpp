//apuntadores.cpp
#include<iostream>
using namespace std;
main()
{
      int a=5,*p;
      p = &a;
      
      cout<<a<<endl;
      cout<<*p<<endl;            
      cout<<&a<<endl;
      cout<<p<<endl;
      cout<<&p<<endl;
      cout<<&*p<<endl;
      cout<<*&p<<endl;
  
     *p *=2;
      cout<<a<<endl;
      int &r = a;     //declara una referencia
      cout<<a<<endl;
      cout<<r<<endl;
      cout<<&a<<endl;
      cout<<&r<<endl;
  
      r *=2;
      cout<<a<<endl;
      *p = a + r +1;
      cout<<*p<<endl;
      cout<<a<<endl;

      int *p2 = p;
      *p2 = 5;
      cout<<r<<endl;
      cout<<a<<endl;
 
      int b = 3;
      p2 = &b;
      *p2 = 11;
      cout<<r<<endl;
      cout<<*p2<<endl;
      cout<<b<<endl;
      *p2 =*&a + 1 + r +b;
      cout<<b<<endl;
	  cout<<*p2<<endl; 
      return 0;
}
