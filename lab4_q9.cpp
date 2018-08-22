//this is the library
#include <iostream>
using namespace std;
int main(){
     double p,t,r,si;  //declaring the variable

     cout<<"Enter the principal"<<endl;    //Asking for the initial sum
     cin >> p;
     cout<<"Enter the rate percent"<<endl;   //Asking for the rate of interest
     cin>> r;
     cout<<"Enter the time period in years"<<endl;   //Asking for the no of years
     cin >> t;
     
     si=(p*r*t)/100 ; // calculating the simple interest
     cout<< "Hence the simple interest is : "<<si<<endl;  //Printing out the simple interest
  return 0;
}

