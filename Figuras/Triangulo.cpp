/*5.10 figuras.cpp
    CISNEROS OROPEZA MOISES ALONSO
    302-A
*/
#include <iostream>
using namespace std;

int main ()
{
    int i,j,k;
	for(i=0;i<10;i++)
    {
        for(j=0;j<=i;j++)
            cout <<"*";
        cout<<"\n";
	}
	
    cout <<"\n";
	for(i=0;i<=10;i++)
    {
        for(j=0;j<10-i;j++)
            cout <<"*";
        cout <<"\n";	
	}
        
	for(i=0;i<=10;i++)
    {
        for(k=1;k<=i;k++)
            cout <<" ";
        for(j=0;j<10-i;j++)
            cout <<"*";
        cout <<"\n";		
	}
	
    for(i=0;i<=10;i++)
    {
        for(k=1;k<=10-i;k++)
            cout <<" ";
        for(j=0;j<i;j++)
            cout <<"*";
        cout <<"\n";
	}
	system ("PAUSE");
	return 0;
}
