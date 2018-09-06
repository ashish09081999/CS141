//this is the library path
#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"Enter the no of patterns required"<<endl;  //Asking the user for the no of patterns required
	cin>>n;
	
	for (int i=0;i<n;i++)
	 {                      
		// print stars in row 0 and last
		if(i==0 || i==n-1)
			for(int j=0;j<n;j++)
			cout<<"*";
		//for others
		else {          
			// print star
			cout<<"*";
			// print some spaces
			for(int j=0;j<(n-2);j++)
				cout<<" ";
			// print star
			cout<<"*"; 
		}
				
		
		cout<<endl;
	}
	return 0;
}	
