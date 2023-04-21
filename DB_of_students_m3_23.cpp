
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
	string recordCardNumber;
	string birthDateString;
	bool sex; // true - malchik // false - devochka
	int startYear;
	ExamsRecords examsRecordsData[9][10];
	double avrMarks;
};

void addStudent()
{
	StudentNode s;
	s.surName = "Сафин";
	s.name = "Гитлер";
	s.middleName = "Мерсович";
	s.faculty = "Информационная безопасность";
	s.department = "ИКБ";
	s.group = "БАСО-02-22";
	s.recordCardNumber = "СБС86";
	s.birthDateString = "20 апреля 1889";
	s.sex = true; // true - malchik // false - devochka
	s.startYear=2022;
	s.examsRecordsData[0][0].name = "Физика";
	s.examsRecordsData[0][0].mark = 3;	
	s.examsRecordsData[0][1].name = "Языки программирования";
	s.examsRecordsData[0][1].mark = 3;
	s.examsRecordsData[0][2].name = "Математика";
	s.examsRecordsData[0][2].mark = 3;
	s.examsRecordsData[0][3].name = "Математический анализ";
	s.examsRecordsData[0][3].mark = 5;
	s.examsRecordsData[0][4].name = "История";
	s.examsRecordsData[0][4].mark = 2;
	FILE* textFile;
	fopen_s(&textFile, "textFile.txt", "w+");

	fprintf(textFile, "%s \n%s \n%s \n%s \n%s \n%s \n%s \n%d", \
		s.surName, \
		s.name,\
		s.middleName,\
		s.faculty,\
		s.department,\
		s.group,\
		s.recordCardNumber,\
		s.birthDateString,\
		s.sex,\
		s.startYear);
	fclose(textFile);
}


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
		cout << "3 - Выполнить задание" << endl;
		cout << "Введите цифру для выбора действия" << endl;
		cin >> selectedItem;
		switch (selectedItem){
		case 0:
			break;		
		case 1:
			addStudent();
			break;
		default:
			cout << "Выход из курсовой работы" << "\n";
			break;
		}
	}
}

