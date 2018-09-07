/*TO PRINT INVERTED SQUARE TRIANGLE
*****
****
***
**
* *///DEFINE LIBRARY
#include<iostream>
using namespace std;
int main()
{
int n=5;
int i,j;
//print the stars first
for (i=0;i<n;i++)
  {for (j=0; j<n-i ; j++)
        {cout<<"*";}
cout<<endl;
   }
return 0;
}
