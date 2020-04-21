#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double e=2.718281828,pi=3.141592654;
//sqrt() raiz
//pow(a,b) a elevado a la b
double fun(double x){
       return pi*x*x*((9-x)/3)-30;
}

int main(){
    double a,b,c,r;
    int n;
    n=5;
    a=2;
    b=3;
    for(int i=0;i<n;i++){
            c=b-fun(b)*((b-a)/(fun(b)-fun(a)));
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
