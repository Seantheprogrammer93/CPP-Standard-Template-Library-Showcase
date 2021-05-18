#pragma once
#include <string>

class Student
{
public:
	Student();
	Student(std::string name, float gpa, float studentDebt, float studentHeight);
	~Student();

	std::string mStudentName;
	float mStudentGPA;
	float mStudentDebt;
	float mStudentHeight; // In Feet


	// Compare Student GPA Functor
	struct CompareStudentGPA
	{
		bool operator() (const Student& firstStudent, const Student& secondStudent) const
		{
			return firstStudent.mStudentGPA < secondStudent.mStudentGPA;
		}
	};

	// Compare Student Debt Functor
	struct CompareStudentDebt
	{
		bool operator() (const Student* firstStudent, const Student* secondStudent) const
		{
			return firstStudent->mStudentDebt > secondStudent->mStudentDebt;
		}
	};


	// Compare Student Height Functor
	struct CompareStudentHeight
	{
		bool operator() (const Student* firstStudent, const Student* secondStudent) const
		{
			return firstStudent->mStudentHeight > secondStudent->mStudentHeight;
		}
	};
};