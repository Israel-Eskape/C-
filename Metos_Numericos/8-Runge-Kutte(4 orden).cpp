#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double yi(double k1,double k2,double k3,double k4,double h){
       return ((0.166666)*(k1+2*k2+2*k3+k4)*h);
}
double fun(double x,double y){
       return -4.40159/(sqrt(y*y*y)); 
	   //-2*x*x*x+12*x*x-20*x+8.5;
}
int main(){
    double y,x,h,k1,k2,k3,k4;
    int yf=300*3;
    y=6;
    h=0.01;
    x=0;
    
    for(int i=0;i<yf;i++){
            k1=fun(x,y);
            k2=fun(x+0.5*h,y+0.5*k1*h);
            k3=fun(x+0.5*h,y+0.5*k2*h);
            k4=fun(x+h,y+h*k3);
            y=y+yi(k1,k2,k3,k4,h);
            x+=h;
            printf("X(%d)=  %g     Y(%d)=  %g\n",i+1,x,i+1,y);
    }
    system ("pause");
    return 0;
}
