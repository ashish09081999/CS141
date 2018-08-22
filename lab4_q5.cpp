//this is the library
#include <iostream>
using namespace std;
int main(){
     double angle_a,angle_b,angle_c;  //declaring the variable

     cout<<"Enter first angle"<<endl;    //Asking for the first angle
     cin >> angle_a;
     cout<<"Enter the second angle"<<endl;   //Asking for the second angle
     cin>> angle_b;
     angle_c=180-(angle_a + angle_b) ; // calculating the third angle
     cout<< "Hence the third angle of the triangle is : "<<angle_c<<endl;  //Printing out the third angle
  return 0;
}

