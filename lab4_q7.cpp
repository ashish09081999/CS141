//this is the library
#include <iostream>
#include <cmath>
using namespace std;
int main(){
     double side, area;  //declaring the variable

     cout<<"Enter the length of the side of the equilateral triangle"<<endl;    //Asking for the side of the triangle
     cin >> side;
     
     area=((sqrt(3))/4)*side*side ; // calculating the area of the triangle
     cout<< "Hence the area of the triangle is : "<<area<<endl;  //Printing out the area of the triangle
  return 0;
}

