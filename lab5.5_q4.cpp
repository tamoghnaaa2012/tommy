/*to print the stars in right triangle form
*
**
***
****
***** */
//define library

#include<iostream>

using namespace std;
int main(){

int n=5;
int i,j;
//to print the stars
for (int i=0;i<n;i++){
	for (j=0;j<(i+1) ;j++)
   	{ cout<<"*";}
cout<<endl;}
return 0;
}
