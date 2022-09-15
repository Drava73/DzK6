#include<iostream>
using namespace std;

class SaveDate
{

	int date;


public:
	SaveDate(int dateN) { date = dateN; }
	friend SaveDate operator+(const SaveDate& dateN, int value);
	int Getdate()const;
	void Setdate(int a);
	void Inputdate();
	void Outputdate();
	
};

SaveDate operator+(const SaveDate& dateN, int value)
{
	return SaveDate(dateN.date + value);
}

int SaveDate::Getdate() const
{
	return 0;
}

void SaveDate::Setdate(int a)
{

}

void SaveDate::Inputdate() 
{
	cout << endl << "Input date: ";
	cin >> date;
}

void SaveDate::Outputdate()
{
	cout << endl << "Date: "<<date;
}



int main()
{


	SaveDate obj1(5);
	SaveDate obj2 = obj1 + 5;
	obj2.Outputdate();

}


