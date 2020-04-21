#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double e=2.718281828,pi=3.141592654;
//sqrt() raiz
//pow(a,b) a elevado a la b

int main(){
    int n,it;
    it=3;
    printf("introduce el tamño de la matriz A:  ");
    scanf("%d",&n);
    float A[n][n],b[n],B[n][n],c[n],x[n],xx[n];
    
    x[0]=2;
    x[1]=1;
    x[2]=0;
    for(int i=0;i<n;i++){
            xx[i]=0;
    }
    
    printf("introduce los valores de la matriz A:  ");
    for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                   scanf("%f",&A[i][j]);
   printf("\nintroduce los valores b:  ");
   
   for(int i=0;i<n;i++){
            scanf("%f",&b[i]);
   }        
   for(int i=0;i<n;i++)
          c[i]=b[i]/A[i][i];

   for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
                   if(i==j){
                            B[i][j]=0;
                   }
                   else
                            B[i][j]=-A[i][j]/A[i][i];
           }      
    }
  
          for(int i=0;i<n;i++){
                  for(int j=0;j<n;j++){
                         x[i]=x[i]+B[i][j]*x[j];
                         float aux=xx[i];
                         xx[i]=x[i];
                         x[i]=aux;
                  }
                  xx[i]=xx[i]+c[i];
          }
          
          
          for(int k=0;k<n;k++)
                  printf(" %f ",xx[k]);
  
   printf("\n");
   system ("pause");
   return 0;
}
