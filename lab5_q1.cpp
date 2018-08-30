//This is the library
#include<iostream>
using namespace std;
int main(){
   int a,b;                                 //Defining the variables
   cout<<"Enter the first number"<<endl;
   cin>>a;
   cout<<"Enter the second number"<<endl;  //Asking for the two numbers
   cin>>b;
   if(a>b) {                               //Defining the conditions
      cout<<"Maximum of the two numbers is : "<<a<<endl;
   }
   else {
      cout<<"maximum of the two numbers is : "<<b<<endl; //Printing out the result
   }
   return 0;
}
   
