#pragma once
class SaveDate
{

	int date;


public:
	SaveDate(int dateN) { date = dateN; }
	/*friend SaveDate operator+(const SaveDate& dateN, int value);
	friend SaveDate operator-(const SaveDate& dateN, int value);
	friend bool operator== (const SaveDate& obj, const SaveDate& obj2);
	friend bool operator!= (const SaveDate& obj, const SaveDate& obj2);
	friend bool operator> (const SaveDate& obj, const SaveDate& obj2);
	friend bool operator< (const SaveDate& obj, const SaveDate& obj2);
	friend bool operator>= (const SaveDate& obj, const SaveDate& obj2);
	friend bool operator<= (const SaveDate& obj, const SaveDate& obj2);
	

	SaveDate& operator += (SaveDate obj);
	SaveDate& operator -= (SaveDate obj);*/
	int Getdate()const;
	void Inputdate();
	void Outputdate();
	void Setdate(int a);
	void increase(int d) {
		date + 1;
	};
	void decrease(int d) {
		date - 1;
	};


};

