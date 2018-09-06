//this is the library path
#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"Enter the no of patterns required"<<endl;  //Asking the user for the no of patterns required
	cin>>n;
	for (int i=0;i<n;i++)
	 {                              //Pattern for each row
		
		cout<<endl;
		for (int j=0;j<n;j++)  //Pattern for each column
		{                      
			cout<<"*";     //Printing out the pattern with *    
		}
		
	}
	cout<<endl;
	return 0;
}
