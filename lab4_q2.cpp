//this is the library
#include <iostream>
using namespace std;
int main(){
     double celsius;  //declaring the variable
     double fahrenheit;
     cout<<"Enter the temperature in celsius"<<endl;    //Asking for the temperature in celsius 
     cin >> celsius;
     fahrenheit=((celsius*9)/5) + 32;     //Converting celsius into fahrenheit
     cout<<"The temperature in fahrenheit is  : "<< fahrenheit << endl;    // Printing the value in fahrenheit
  return 0;
}

