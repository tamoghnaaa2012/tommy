/*
*****
** **
* * *
** **
*****
*/
#include<iostream>
using namespace std;

int main()
{
	for(int i=0;i<5;i++)

		//print all stars
		if(i==0 || i==4)
		{
			for(int a=0;a<5;a++)
			{
				cout<<"*";
			}
		}
		//print 2star space 2stars
		else if(i==1 ||i==3)
		{
			//print two stars
			for(int b=0;b<2;b++)
			{
				cout<<"*";
			} 
		}		
                //print star space star space star
		else
		{
			//print star
			cout<< "* * *";
		}
		cout<<endl;
	
	return 0;
}
			


