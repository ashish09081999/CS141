//This is the library
#include<iostream>
using namespace std;
int main(){
   int a;                                 //Defining the variable
   cout<<"Enter the  number"<<endl;
   cin>>a;                               //Asking for the  number
   if(a>0) {                             //Defining the conditions
       cout<<"The number is positive"<<endl;
       }
   else if(a==0) {
       cout<<"The number is equal to zero"<<endl;
       }
   else {
       cout<<"The number is negative"<<endl;  //Printing out the number is whether positive , negative or zero
       }
   return 0;
}                            
      
   
