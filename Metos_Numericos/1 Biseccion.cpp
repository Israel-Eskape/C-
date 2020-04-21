#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double e=2.718281828,pi=3.141592654;
//sqrt() raiz
//pow(a,b) a elevado a la b
double fun(double x){
       return sqrt(x*x*x*sin(x))-log(cos(x))-3;
	   //2*x*x*x-11.7*x*x+17*x-5;
}
// sin(x)+log(x);
int main(){
    double a,b,c,r;
    int n;
    n=15;
    a=0.5;
    b=1;
    for(int i=0;i<n;i++){
            c=(a+b)/2;
            printf("\nn=%d->f(%g)==%g",i+1,c,fun(c));
            if(fun(c)==0)
                         break;
            if(fun(a)*fun(c)<0)
                         b=c;
            if(fun(c)*fun(b)<0)
                         a=c;
    }
    printf("\n\n->La raiz=%g\n",c);
    system("pause");
    return 0;
}
