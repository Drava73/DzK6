#include<iostream>
#include "Header.h"
using namespace std;

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





int main()
{


	SaveDate obj1(5);
	SaveDate obj6(1);
	SaveDate obj2 = obj1 + 5;
	obj2.Outputdate();
	SaveDate obj3 = obj2 - 1;
	obj3.Outputdate();
	SaveDate obj5 = obj1++;
	obj5.Outputdate();
	obj6 += 1;
	obj6.Outputdate();
	obj6 -= 1;
	obj6.Outputdate();
	bool tf = obj1 > obj6;
	cout << endl << tf;
}


