//this is the library
#include <iostream>
using namespace std;
int main(){
     double celsius;  //declaring the variable
     double fahrenheit;
     cout<<"Enter the temperature in fahrenheit"<<endl;    //Asking for the temperature in fahrenheit 
     cin >> celsius;
     celsius=((fahrenheit- 32)*5)/9;     //Converting fahrenheit into celsius
     cout<<"The temperature in celsius is  : "<< celsius << endl;    // Printing the value in celsius
  return 0;
}

