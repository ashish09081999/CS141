//This is the library
#include<iostream>
using namespace std;
int main(){
   int a;                                 //Defining the variables
   cout<<"Enter the number"<<endl;
   cin>>a;                                //Asking for the number
   if (a%2==0) {                          //Defining the conditions
       cout<<"The number is even"<<endl;
    }
   else if (a%2==1) {
       cout<<"The number is odd"<<endl;   //Printing whether the number is even or odd
    }
   return 0;
}
   
