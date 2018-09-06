//this is the library path
#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"Enter the no of patterns required"<<endl;  //Asking the user for the no of patterns required
	cin>>n;
	
	for (int i=0;i<n;i++)
	 {                      
		for(int j=0;j<n;j++)
		{
			if(i==0 || i==n-1)               //printing stars in row 0 and n-1
			cout<<"*";
			else                             //for others
			{
				if(j==0 || j==n-1)       //printing stars in column 0 and n-1
				cout<<"*";
				else
				{
					if(i==j || i+j==n-1)    //printing stars for both the diagonals using the condition
					cout<<"*";
					else                    //for others print spaces
					cout<<" ";
				}
			}
		}
		cout<<endl;
	}
	return 0;
}	
