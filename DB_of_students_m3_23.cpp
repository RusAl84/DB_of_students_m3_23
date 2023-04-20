
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;
struct ExamsRecords {
	string name;
	int mark;
	// 0 - ne zachet  
	// 1 - zachet
	// 2,3,4,5 - octnki
	// 6 pole pustoe
};

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
	bool sex; // true - malchik
	// false - devochka
	int startYear;
	ExamsRecords examsRecordsData[9][10];
	StudentNode* next;
	int id;
	double avrMarks;
};


int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
	SetConsoleOutputCP(1251);

    std::cout << "Курсовая работа!\n";
	//menu
	int selectedItem=-1;
	while (selectedItem!=0){
		system("cls");
		cout << "Главное меню" << endl;
		cout << "0 - выйти из программы" << endl;
		cout << "1 - добавить данные о студенте" << endl;
		cout << "2 - вывести данные о студентах" << endl;

		cout << "Введите цифру для выбора действия" << endl;
		cin >> selectedItem;
		switch (selectedItem){
		case 0:
			break;
		default:
			cout << "Выход из курсовой работы" << "\n";
			break;
		}
	}
}

