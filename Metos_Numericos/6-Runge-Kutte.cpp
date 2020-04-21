#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double yi(double y,double k1,double k2,double h){
       return y+(0.5*k1+0.5*k2)*h;
}
double fun(double x,double y){
       return x-y;
}
int main(){
    double y,x,h,k1,k2,r;
    int yf=10;
    y=2;
    h=0.2;
    x=0;
    
    for(int i=0;i<yf/2;i++){
            k1=fun(x,y);
            k2=fun(x+h,y+k1*h);
            y=yi(y,k1,k2,h);
            x+=h;
            printf("X(%d)=  %g     Y(%d)=  %g\n",i+1,x,i+1,y);
    }
    system ("pause");
    return 0;
}
