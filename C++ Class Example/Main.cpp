#include "Student.h"
#include <iostream>

using namespace std;

int main()
{
	Student s;

	s.setName("John");
	s.setID(781548);
	s.setClasses("Data Structures");
	s.setGrade(93);
	s.setSemester("Spring2022");

	cout << s.getName();
	cout << endl;
	cout << s.getID();
	cout << endl;
	cout << s.getGrade();
	cout << endl;
	cout << s.getGPA();
	cout << endl;
	cout << s.getSemester();
}