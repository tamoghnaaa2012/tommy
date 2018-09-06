/*
 *****
 *   *
 *   *
 *   *
 *****
*/


#include<iostream>
using namespace std;

int main(){
	//print stars in hollow square
	int n=5;
	for(int i = 0; i < n ; i++)
	{
		 // 1st and last row
		 if (i== 0 || i == n-1){
			// print n stars
			for (int j = 0; j<n; j++)
				cout << "*";
			cout << endl;
		 }
		else // for every other row
		{
			for(int j =0; j< 5; j++)
			{
				if (j==0||j==(n-1))
					cout << "*";
				else
			 		cout << " ";
				
			}
			cout << endl;
		}
	}
	return 0;
}
