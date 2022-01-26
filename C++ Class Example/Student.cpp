#include "Student.h"

Student::Student()
{
	name = "";
	id = 0;
	classes = "";
	grade = 0;
	semester = "";
	GPA = 0.0;
}

Student::~Student()
{
}

void Student::setName(string name_)
{
	name = name_;
}

void Student::setID(int id_)
{
	id = id_;
}

void Student::setClasses(string classes_)
{
	classes = classes_;
}

void Student::setGrade(int grade_)
{
	grade = grade_;
}

void Student::setSemester(string semester_)
{
	semester = semester_;
}

string Student::getName()
{
	return name; 
}

int Student::getID()
{
	return id;
}

int Student::getGrade()
{
	return grade;
}

float Student::getGPA()
{
	return GPA;
}

string Student::getSemester()
{
	return semester;
}