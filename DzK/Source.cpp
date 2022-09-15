#include<iostream>
using namespace std;

class SaveDate
{

	int date;


public:

	int Getdate()const;
	void Setdate(int a);
	void Inputdate();
};

int SaveDate::Getdate() const
{
	return 0;
}

void SaveDate::Setdate(int a)
{

}

void SaveDate::Inputdate() 
{
	cout << endl << "Input date";
	cin >> date;
}

int main()
{




}