#include <iostream>

using namespace std;

class Rectangle {
   public:
      double length;   // Length of a box
      double breadth;  // Breadth of a box
      //Member function declaration
      double area(void);
      double perimeter(void);
};

//Member function definition
double Rectangle::area(void){
    return length*breadth;
}

double Rectangle::perimeter(void){
    return 2*(length + breadth);

}

//Main function for the program
int main(){
    double l,b;
    Rectangle rectangle1;           //Declaring rectangles of rectangle class
    Rectangle rectangle2;
    double area1=0.0;               //Initializing all the variables
    double perimeter1=0.0;
    double area2=0.0;
    double perimeter2=0.0;
    cout<<"Enter the length for Rectangle1"<<endl;    //Asking for parameters of both the rectangles
    cin>>rectangle1.length;
    cout<<"Enter the breadth for rectangle1"<<endl;
    cin>>rectangle1.breadth;
    cout<<"Enter the length for Rectangle2"<<endl;
    cin>>rectangle2.length;
    cout<<"Enter the breadth for rectangle2"<<endl;
    cin>>rectangle2.breadth;
    area1=rectangle1.area();       //Defining the area and perimeter for rectangle1
    perimeter1=rectangle1.perimeter();
    area2=rectangle2.area();       //Defining the area and perimeter for rectangle2
    perimeter2=rectangle2.perimeter();
    if (area1>area2)                //Defining conditions for comparing the area and perimeter
        cout<<"Area of rectangle1 is bigger which is equal to "<<area1<<endl;
    if (area2>area1)
        cout<<"Area of rectangle2 is bigger which is equal to "<<area2<<endl;
    if (perimeter1>perimeter2)
        cout<<"Perimeter of rectangle1 is bigger which is equal to "<<perimeter1<<endl;
    if (perimeter2>perimeter1)
        cout<<"Perimeter of rectangle2 is bigger which is equal to "<<perimeter2<<endl;
    return 0;
}


