//This is the library
#include<iostream>
using namespace std;
int main(){
        int a=0,n,b;                                //Defining the variable and assigning it
	cout<<"Enter the value of n"<<endl;                                
        cin>>n;                                     //Asking for the value of n 
        for (a=0;a<=n;++a) {                 
               b+=a;                         //Defining the condition to find the sum
          }
		cout<<"Sum is "<<b<<endl;    //Printing out the sum
       return 0;
}  
