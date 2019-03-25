#include<iostream>
using namespace std;

class Date{
	friend ostream& operator<<(ostream&, const Date &);
	friend istream& operator>>(istream&,Date &);

private:
	int month;
	int date;
	int year;
	static string monthNames[13];
public:
	Date();
	Date(int,int,int);
	~Date();
	bool operator==(const Date&); 
	Date operator+(int x);
	const Date& operator=(const Date &);
	Date operator--();
	Date operator--(int);
	int operator[](int);
};