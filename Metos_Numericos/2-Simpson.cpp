#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double e=2.718281828,pi=3.141592654;
//sqrt() raiz
//pow(a,b) a elevado a la b
double fun(double x){
       return sqrt(4-x*x);
}

int main(){
    double a,b,n,h,r;
    a=0;
    b=2;
    n=6;
    h=(b-a)/n;
    r=0;
    if(n==2){
             double arr[3];
             for(int i=0;i<=n;i++){
                     arr[i]=fun(a+i*h);
                     printf("f(%d)== %g\n",i,arr[i]);
             }
             r=(arr[0]+4*arr[1]+arr[2])*(h/3);
    }
     if(n==3){
             double arr[4];
             for(int i=0;i<=n;i++){
                     arr[i]=fun(a+i*h);
                     printf("f(%d)== %g\n",i,arr[i]);
             }
             r=(arr[0]+3*arr[1]+3*arr[2]+arr[3])*(3*h/8);
    }
    if(n==4){
             double arr[5];
             for(int i=0;i<=n;i++){
                     arr[i]=fun(a+i*h);
                     printf("f(%d)== %g\n",i,arr[i]);
             }
             r=(7*arr[0]+32*arr[1]+12*arr[2]+32*arr[3]+7*arr[4])*(2*h/45);
    }
    if(n==5){
             double arr[6];
             for(int i=0;i<=n;i++){
                     arr[i]=fun(a+i*h);
                     printf("f(%d)== %g\n",i,arr[i]);
             }
             r=(19*arr[0]+75*arr[1]+50*arr[2]+50*arr[3]+75*arr[4]+19*arr[5])*(5*h/288);
    }
    if(n==6){
             double arr[7];
             for(int i=0;i<=n;i++){
                     arr[i]=fun(a+i*h);
                     printf("f(%d)== %g\n",i,arr[i]);
             }
             r=(41*arr[0]+216*arr[1]+27*arr[2]+272*arr[3]+27*arr[4]+216*arr[5]+41*arr[6])*(h/140);
    }
    
    printf("\nr= %g\n",r);
    system ("pause");
    return 0;
}
