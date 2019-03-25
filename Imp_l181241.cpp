#include"header_l181241.h"
#include<string>

string Date:: monthNames[13] = {"","January","February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

 Date::Date()
{
	month=1;
	date=1;
	year=2000;
}

Date::Date(int m,int d,int y)
{
	if(m>=1 && m<=12)
	{
		month=m;
	}
	else
	{
		month=1;
	}
	if(d<=30 && d>=1)
	{
		date=d;
	}
	else
	{
		date=1;
	}
	int check=y;
	int i=0;
	for(i=0;check!=0;i++)
	{
		check=check/10;
	}
	if(i==4)
	{
		year=y;
	}
	else
	{
		year=2000;
	}
}
ostream & operator<<(ostream & cout,const Date& obj)
{
	cout<<obj.monthNames[obj.month]<<" "<<obj.date<<", "<<obj.year<<endl;
	return cout;
}
 bool Date:: operator==(const Date & obj)
 {
	 bool check;
	if(this->month==obj.month)
	{
		check= true;
	}
	else
		return false;
	if(this->date==obj.date)
	{
		check= true;
	}
	else
		return false;
	if(this->year==obj.year)
	{
		check= true;
	}
	else
		return false;

 }

istream& operator>>(istream& cin, Date & obj)
{
	cin>>obj.date;
	return cin;
}

Date Date:: operator+(int x)
{
	this->date=x+this->date;
	if(this->date>=30 && this->date<=1)
		this->date=this->date;
	else
		this->date=1;
	return *this;
}

const Date& Date ::operator=(const Date& obj)
{
	this->month=obj.month;
	this->date=obj.date;
	this->year=obj.year;
	return *this;
}

Date Date:: operator--()
{
	this->month=this->month-1;
	this->date=this->date-1;
	this->year=this->year-1;
	return *this;
}

Date Date:: operator--(int x)
{
	Date temp=*this;
	this->month=this->month-1;
	this->date=this->date-1;
	this->year=this->year-1;
	return temp;
}

int Date::operator[](int x)
{
	if(x==0)
	{
		return this->date;
	}
	else
	{
		if(x==1)
		{
			return this->month;
		}
		else
		{
			if(x==2)
			{
				return this->year;
			}
			else
			{
				cout<<"Index can only be 0,1, 2";
				return 0;
			}
		}
	}
}