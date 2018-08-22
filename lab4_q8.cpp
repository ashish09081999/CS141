//this is the library
#include <iostream>
using namespace std;
int main(){
     double subject_1,subject_2,subject_3,subject_4,subject_5,total,average,percentage;  //declaring the variable

     cout<<"Enter the marks in subject one out of 100"<<endl;    //Asking for marks in  diff subject
     cin >> subject_1;
     cout<<"Enter the marks in subject two out of 100"<<endl;
     cin >> subject_2;
     cout<<"Enter the marks in subject three out of 100"<<endl;
     cin >> subject_3;
     cout<<"Enter the marks in subject four out of 100"<<endl;
     cin >> subject_4;
     cout<<"Enter the marks in subject five out of 100"<<endl;
     cin >> subject_5;
     
     total=subject_1+subject_2+subject_3+subject_4+subject_5 ; // calculating the total marks
     average=(subject_1+subject_2+subject_3+subject_4+subject_5)/5; //calculating the average
     percentage=(total/500)*100;
     cout<< "Hence the total marks is : "<<total<<endl;  //Printing out the total marks
     cout<< "the average of the subjects is :" <<average<<endl; //Printing out the average of the subjects
     cout<< "The percentage is : " <<percentage<<endl;  //Printing out the percentage
  return 0;
}

