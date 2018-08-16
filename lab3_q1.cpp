//this is the library
#include <iostream>
using namespace std;
//this is the main function
int main() {
    cout << "Hello" << endl;
	// Declaring variables of all types
	int value;              // Declaring the variable
	int a,b;                // Declaring variables together also possible
	double doubleVar = 1.2; // Defining the variables. 
	bool boolVar = true;    // Defining the variable
        char c;                 // Declaring the variable
        float d=1.2234;        // Defining the variable
	
	// Displaying the sizes of data types. 
	cout << "Size of a = " << sizeof(a) << endl;
	cout << "Size of doubleVar = " << sizeof(doubleVar) << endl;
	cout << "Size of boolVar = " << sizeof(boolVar) << endl;
	cout << "Size of char = " << sizeof(char) << endl;
        cout << "size of d = " << sizeof(d) <<endl ;
return 0;
}


