#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double e=2.718281828,pi=3.141592654;
//sqrt() raiz
//pow(a,b) a elevado a la b
double fun(double x){
       return 2*sqrt(x*x+x*x*x*x);
}


int main(){
    double f,a,b,n,h,r=0;
    a=-2;
    b=2;
    n=8;
    h=(b-a)/n;
    r=fun(a)+fun(b);
    
    printf("\nf(%g)= %g",a,fun(a));
    for(int i=1;i<n;i++){
            r=r+2*fun(a+i*h);
            printf("\nf(%g)= %g",a+i*h,fun(a+h*i));
    }
     
    printf("\nf(%g)= %g",b,fun(b));
    printf("\nr= %g\n",r*(h/2));
    
    system ("pause");
    return 0;
       
}
