#include "Student.h"
#include <iostream>

// Assign studentId and name
Student::assignDetails(int id , char sname[]){
  studentID = id ;
  strcpy(name , sname);
}

// Display StudentId and Name
Student::display() {
  cout << "The student id : " << endl;
  cout << "The name of the student : " << endl;
}
