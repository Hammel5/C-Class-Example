#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student
{
public:
	Student();
	~Student();

	void setName(string name_);
	void setID(int id_);
	void setClasses(string classes_);
	void setGrade(int grades_);
	void setSemester(string semester_);

	string getName();
	int getID();
	int getGrade();
	float getGPA();
	string getSemester();

private:
	string name;
	int id;
	string classes;
	int grade;
	string semester;
	float GPA;

};
#endif //!STUDENT_H