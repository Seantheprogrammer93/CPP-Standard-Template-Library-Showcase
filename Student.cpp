#include "Student.h"

Student::Student(std::string name, float gpa, float studentDebt, float studentHeight)
{
	mStudentName = name;
	mStudentGPA = gpa;
	mStudentDebt = studentDebt;
	mStudentHeight = studentHeight; // In Feet
}

Student::Student()
{
}

Student::~Student()
{
}