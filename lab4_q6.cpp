//this is the library
#include <iostream>
using namespace std;
int main(){
     double base , height , area;  //declaring the variable

     cout<<"Enter the length of the base of the triangle"<<endl;    //Asking for the length of the base
     cin >> base;
     cout<<"Enter the height of the triangle"<<endl;   //Asking for the height
     cin>> height;
     area=(base*height)/2 ; // calculating the area of the triangle
     cout<< "Hence the area of the triangle is : "<<area<<endl;  //Printing out the area of the triangle
  return 0;
}

