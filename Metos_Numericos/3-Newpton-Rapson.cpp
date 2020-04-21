#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double e=2.718281828,pi=3.141592654;
//sqrt() raiz
//pow(a,b) a elevado a la b
double fun(double x){
       return cos(x)-x;
}
double devfun(double x){
       return -sin(x)-1;
}

int main(){
    double a,b,c,r;
    int n;
    n=5;
    a=2;
    b=3;
    c=1;
    for(int i=0;i<n;i++){
           printf("\nn=%d->f(%g)==%g",i+1,c,fun(c));
           c=c-(fun(c)/devfun(c));           
    }
    printf("\n\n->La raiz=%g\n",c);
    system("pause");
    return 0;
}
