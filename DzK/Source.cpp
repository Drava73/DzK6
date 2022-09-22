#include<iostream>
#include "Header.h"
using namespace std;

SaveDate operator++ (const SaveDate& _date);
SaveDate operator-- (const SaveDate& _date);

SaveDate operator+ (const SaveDate& _date, int d);
SaveDate operator- (const SaveDate& _date, int d);
SaveDate operator+ (int d, const SaveDate& _date);
SaveDate operator- (int d, const SaveDate& _date);

SaveDate operator+= (SaveDate& _date, int d);
SaveDate operator-= (SaveDate& _date, int d);
SaveDate operator+= (int d, SaveDate& _date);
SaveDate operator-= (int d, SaveDate& _date);

bool operator> (const SaveDate& date_1, const SaveDate& date_2);
bool operator< (const SaveDate& date_1, const SaveDate& date_2);
bool operator>= (const SaveDate& date_1, const SaveDate& date_2);
bool operator<= (const SaveDate& date_1, const SaveDate& date_2);
bool operator== (const SaveDate& date_1, const SaveDate& date_2);
bool operator!= (const SaveDate& date_1, const SaveDate& date_2);



SaveDate operator++(const SaveDate& _date)
{
	SaveDate date(_date);
	date.increase(1);
	return date;
}

SaveDate operator-- (const SaveDate& _date)
{
	SaveDate date(_date);
	date.decrease(1);
	return date;
}

SaveDate operator+ (const SaveDate& _date, int d)
{
	SaveDate date(_date);
	date.increase(d);
	return date;
}

SaveDate operator- (const SaveDate& _date, int d)
{
	SaveDate date(_date);
	date.decrease(d);
	return date;
}

SaveDate operator+ (int d, const SaveDate& _date)
{
	SaveDate date(_date);
	date.increase(d);
	return date;
}

SaveDate operator- (int d, const SaveDate& _date)
{
	SaveDate date(_date);
	date.decrease(d);
	return date;
}

SaveDate operator+= (SaveDate& _date, int d)
{
	_date.increase(d);
	return _date;
}

SaveDate operator-= (SaveDate& _date, int d)
{
	_date.decrease(d);
	return _date;
}

SaveDate operator+= (int d, SaveDate& _date)
{
	_date.increase(d);
	return _date;
}

SaveDate operator-= (int d, SaveDate& _date)
{
	_date.decrease(d);
	return _date;
}

bool operator> (const SaveDate& date_1, const SaveDate& date_2)
{
	return date_1.date > date_2.date;
}

bool operator< (const SaveDate& date_1, const SaveDate& date_2)
{
	return date_1.date < date_2.date;
}

bool operator>= (const SaveDate& date_1, const SaveDate& date_2)
{
	return date_1.date >= date_2.date;
}

bool operator<= (const SaveDate& date_1, const SaveDate& date_2)
{
	return date_1.date <= date_2.date;
}

bool operator== (const SaveDate& date_1, const SaveDate& date_2)
{
	return date_1.date == date_2.date;
}

bool operator!= (const SaveDate& date_1, const SaveDate& date_2)
{
	return date_1.date != date_2.date;
	 
}

/*
SaveDate& SaveDate::operator+=(SaveDate obj)
{
	
	
		date += obj.date;
		return *this;
	
}

SaveDate& SaveDate::operator-=(SaveDate obj)
{
	date -= obj.date;
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

bool operator==(const SaveDate& obj, const SaveDate& obj2)
{
	return obj.date == obj2.date;
}

bool operator!=(const SaveDate& obj, const SaveDate& obj2)
{
	return obj.date != obj2.date;
}

bool operator>(const SaveDate& obj, const SaveDate& obj2)
{
	return obj.date > obj2.date;
}

bool operator<(const SaveDate& obj, const SaveDate& obj2)
{
	return obj.date < obj2.date;
}

bool operator>=(const SaveDate& obj, const SaveDate& obj2)
{
	return obj.date >= obj2.date;
}

bool operator<=(const SaveDate& obj, const SaveDate& obj2)
{
	return obj.date <= obj2.date;
}
*/
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

void SaveDate::Setdate(int a)
{
	date = a;
}









