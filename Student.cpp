#include "Student.h"
#include <iostream>
using namespace std;
#include <cstring>

// Assign studentId and name
void Student::assignDetails(int id , char sname[]);{
  studentID = id ;
  strcpy_s(name , sname);
}

// Display StudentId and Name
void Student::display() {
  cout << "The student id : " << endl;
  cout << "The name of the student : " << endl;
}
