#include <iostream>  
using namespace std;
 
int main ()  
{  
    int n, i, j , k;  
    cout <<" Entrada: ";  
    cin >>n;  
    n=(n/2)+1;
    for (i=0; i<n ; i++) 
    {  
        for (j=0; j<n-i-1; j++)  
        cout <<" ";
        
        for (k=0; k<2*i+1; k++)  
        cout <<"*";  
            
        cout <<"\n";
    }       
      
    for (i=n-2; i>=0; i--) 
    {  
        for (j=0; j<n-i-1; j++)  
        cout <<" ";  
        
        for (k=0; k<2*i+1; k++)  
        cout <<"*";  
        
        cout <<"\n"; 
    } 
    system ("PAUSE");  
    return 0;  
} 

