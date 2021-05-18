#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <unordered_map>
#include "Student.h"

int main()
{
	// List of int's
	std::list<int> ListofInts;
	ListofInts.push_back(500);
	ListofInts.push_back(400);
	ListofInts.push_back(300);
	ListofInts.push_back(200);
	ListofInts.push_back(100);

	// List of string's
	std::list<std::string> ListofStrings;
	ListofStrings.push_back("Hello");
	ListofStrings.push_back("ABC");
	ListofStrings.push_back("DEF");
	ListofStrings.push_back("GHI");
	ListofStrings.push_back("JKL");

	// Vector of student's
	std::vector<Student> vectorOfStudents;
	vectorOfStudents.push_back(Student());
	vectorOfStudents.push_back(Student());
	vectorOfStudents.push_back(Student());
	vectorOfStudents.push_back(Student());

	// Stack of student pointer's
	std::stack<Student*> stackOfStudents;
	Student* aStudent = new Student;

	// For loop to add student pointer's
	for (int i = 0; i < 9; i++)
	{
		aStudent = new Student;
		stackOfStudents.push(aStudent);
	}

	// While loop to delete student pointer's
	while (!stackOfStudents.empty())
	{
		Student* studentPtr = stackOfStudents.top();
		stackOfStudents.pop();
		delete studentPtr;
	}

	// Set of int's
	std::set<int> setOfInts;
	setOfInts.insert(19);
	setOfInts.insert(28);
	setOfInts.insert(37);
	setOfInts.insert(46);
	setOfInts.insert(55);

	// Set of Char's
	std::set<int> setOfChars;
	setOfChars.insert('a');
	setOfChars.insert('a');
	setOfChars.insert('b');
	setOfChars.insert('c');
	setOfChars.insert('d');

	// Map of movie title's to the year of release
	std::map<std::string, int> movieMap;
	movieMap["Gone with the Wind"] = 1940;
	movieMap["Pulp Fiction"] = 1994;
	movieMap["Top Gun"] = 1986;
	movieMap["Halloween"] = 1978;
	movieMap["The Matrix"] = 1999;

	// Unordered map of movie title's to the year of release
	std::unordered_map<std::string, int> movieUnorderedMap;
	movieUnorderedMap["Gone with the Wind"] = 1940;
	movieUnorderedMap["Pulp Fiction"] = 1994;
	movieUnorderedMap["Top Gun"] = 1986;
	movieUnorderedMap["Halloween"] = 1978;
	movieUnorderedMap["The Matrix"] = 1999;

	// Unordered map of Student pointer's to int's (posibly student ID numbers)
	std::unordered_map<Student*, int> studentPointersToInts;
	studentPointersToInts[new Student("Joe", 2.0, 50000, 6.4)] = 157393;
	studentPointersToInts[new Student("Michelle", 3.0, 10000, 5.0)] = 240396;
	studentPointersToInts[new Student("Steve", 1.0, 70000, 6.0)] = 336278;
	studentPointersToInts[new Student("Cindy", 2.5, 500, 5.5)] = 409124;

	// Priority queue of student's
	std::priority_queue<Student, std::vector<Student>, Student::CompareStudentGPA> priorityqueueOfStudentGPA;
	priorityqueueOfStudentGPA.push(Student("Joe", 2.0, 50000, 6.4));
	priorityqueueOfStudentGPA.push(Student("Michelle", 3.0, 10000, 5.0));
	priorityqueueOfStudentGPA.push(Student("Steve", 1.0, 70000, 6.0));
	priorityqueueOfStudentGPA.push(Student("Cindy", 2.5, 500, 5.5));

	Student checkStudent_1 = priorityqueueOfStudentGPA.top();

	// Priority queue of student pointer's
	std::priority_queue<Student*, std::vector<Student*>, Student::CompareStudentDebt> priorityQueueOfStudentDebt;
	priorityQueueOfStudentDebt.push(new Student("Joe", 2.0, 50000, 6.4));
	priorityQueueOfStudentDebt.push(new Student("Michelle", 3.0, 10000, 5.0));
	priorityQueueOfStudentDebt.push(new Student("Steve", 1.0, 70000, 6.0));
	priorityQueueOfStudentDebt.push(new Student("Cindy", 2.5, 500, 5.5));

	Student* checkStudent_2 = priorityQueueOfStudentDebt.top();

	while (!priorityQueueOfStudentDebt.empty())
	{
		Student* PqStudentPtr = priorityQueueOfStudentDebt.top();
		priorityQueueOfStudentDebt.pop();
		delete PqStudentPtr;
	}
}
