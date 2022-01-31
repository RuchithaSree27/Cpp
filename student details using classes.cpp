/*Write a C++ Program to display Names, Roll No., and grades of 3 students who have appeared 
in the examination. Declare the class of name, Roll No. and grade. Create an array of class objects. 
Read and display the contents of the array. */

#include <iostream> 
using namespace std; 
class student 
{ 
 public: 
 char name[20]; 
 float grade; 
 int rollno; 
}; 
int main() 
{ 
 student s[3]; 
 int i; 
 for(i=0;i<3;i++) 
 { 
 cout << "Enter the name : " << endl; 
 cin >> s[i].name; 
 cout << "Enter the grade : " <<endl; 
 cin >> s[i].grade; 
 cout << "Enter the roll no : " << endl; 
 cin >> s[i].rollno; 
 } 
 cout << "STUDENT DETAILS " <<endl; 
 cout << "-------------------------" <<endl; 
 for(i=0;i<3;i++) 
 { 
 cout << "Studnet roll no : " << s[i].rollno <<endl; 
 cout <<"Name : " << s[i].name << endl; 
 cout << "Grade " <<s[i].grade << endl; 
 } 
} 


