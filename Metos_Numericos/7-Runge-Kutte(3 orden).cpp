#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double yi(double y,double k1,double k2,double k3,double h){
       return y+0.1666666*(k1+4*k2+k3)*h;
}
double fun(double x,double y){
       return y*x*x-1.2*y;
}
int main(){
    double y,x,h,k1,k2,k3,r;
    int yf=4;
    y=1;
    h=0.25;
    x=0;
    
    for(int i=0;i<4;i++){
            k1=fun(x,y);
            k2=fun(x+0.5*h,y+0.5*k1*h);
            k3=fun(x+h,y-h*k1+2*k2*h);
            y=yi(y,k1,k2,k3,h);
            x+=h;
            printf("X(%d)=  %g     Y(%d)=  %g\n",i+1,x,i+1,y);
    }
    system ("pause");
    return 0;
}
