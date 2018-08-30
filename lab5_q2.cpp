//This is the library
#include<iostream>
using namespace std;
int main(){
   int a,b,c;                                 //Defining the variables
   cout<<"Enter the first number"<<endl;
   cin>>a;
   cout<<"Enter the second number"<<endl;  
   cin>>b;
   cout<<"Enter the third number"<<endl;
   cin>>c;                                   //Asking for the three numbers
   if(b>c && b>a) {                          //Checking for the diff possibilities
       cout<<"Greatest of the three numbers is : "<<b<<endl;  
   }
   else if(a>b && a>c) {
       cout<<"Greatest of the three numbers is : "<<a<<endl;
   }
   else {
       cout<<"Greatest of the three numbers is : "<<c<<endl;  //Printing out the result after checking the conditions
   }
   return 0;
} 
