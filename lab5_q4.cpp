//This is the library
#include<iostream>
using namespace std;
int main(){
   int a;                                 //Defining the variables
      cout<<"Enter the number"<<endl;
      cin>>a;                             //Asking for the number
   if (a%5==0 && a%11==0) {               //Defining the conditions
      cout<<"The number is divisible by both 5 and 11"<<endl;
   }
   else { 
      cout<<"The number is not divisible by both 5 and 11"<<endl; //Printing out the result
   }
   return 0;
}
   
