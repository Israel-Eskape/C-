#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double e=2.718281828,pi=3.141592654;
//sqrt() raiz
//pow(a,b) a elevado a la b
double fun(double x){
       return sqrt((10-x*x*x)/4);
}
int main(){
    double a,b,c,r;
    int n;
    n=5;
    c=1;
    for(int i=0;i<=20;i++){
          printf("\nn=%d->f(%f)==%f",i,c,fun(c));
          c=fun(c);
    }
    system("pause");
    return 0;
}
