//This is the library
#include<iostream>
using namespace std;
int main(){
        int a=0,n,b;                                //Defining the variable and assigning it
	cout<<"Enter the value of n"<<endl;   //Asking for the value of n                              
        cin>>n;
        for (a=0;a<=n;++a) {                
             if (a%2==0)                      //Defining the condition to find the sum of even numbers
              {                
               b+=a; 
               }                        
          }
		cout<<"Sum is "<<b<<endl;    //Printing out the sum
       return 0;
}  
