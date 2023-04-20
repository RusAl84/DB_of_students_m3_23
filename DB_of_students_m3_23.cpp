
#include <iostream>
#include <string>

using namespace std;

struct StudentNode
{
	string surName;
	string name;
	string middleName;
	string faculty;
	string department;
	string group;
	string recordÑardNumber;
	string birthDateString;
	bool sex; // true - ìàëü÷èê
	// false - äåâî÷êà
	int startYear;

	ExamsRecords examsRecordsData[9][10];
	StudentNode* next;
	int id;
	double avrMarks;


};


int main()
{
    std::cout << "Hello World!\n";
}

