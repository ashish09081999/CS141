//this is the library
#include <iostream>
#include<cmath>
using namespace std;
int main(){
     double p,t,r,ci,n,amount;  //declaring the variable

     cout<<"Enter the principal"<<endl;    //Asking for the initial sum
     cin >> p;
     cout<<"Enter the rate percent"<<endl;   //Asking for the rate of interest
     cin>> r;
     cout<<"Enter the time period in years"<<endl;   //Asking for the no of years
     cin >> t;
     cout<<"Enter the no of compoundings per year"<<endl;  //Asking for no of compoundings per year
     cin>> n ;
    
     amount=p*pow((1+(r/n)),(n*t));  //calculating the amount
     
     ci=amount - p ; // calculating the compound interest
     cout<< "Hence the compound interest is : "<<ci<<endl;  //Printing out the compound interest
  return 0;
}

