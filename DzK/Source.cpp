#include<iostream>
using namespace std;

class SaveDate
{

	int date;


public:
	SaveDate(int dateN) { date = dateN; }
	friend SaveDate operator+(const SaveDate& dateN, int value);
	friend SaveDate operator-(const SaveDate& dateN, int value);
	SaveDate operator++(void);
	SaveDate operator++(int d);
	SaveDate operator--(void);
	SaveDate operator--(int d);
	int Getdate()const;
		void Inputdate();
	void Outputdate();

	
};




SaveDate SaveDate::operator++(void)
{
	date++;
	return *this;
}

SaveDate SaveDate::operator++(int d)
{
	date++;
	return *this;
}

SaveDate SaveDate::operator--(void)
{
	date--;
	return *this;
}

SaveDate SaveDate::operator--(int d)
{
	date--;
	return *this;
}


SaveDate operator+(const SaveDate& dateN, int value)
{
	return SaveDate(dateN.date + value);
}

SaveDate operator-(const SaveDate& dateN, int value)
{
	return SaveDate(dateN.date - value);
}

int SaveDate::Getdate() const
{
	return 0;
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
	SaveDate obj3 = obj2 - 1;
	obj3.Outputdate();
	SaveDate obj5 = obj1++;
	obj5.Outputdate();
}


