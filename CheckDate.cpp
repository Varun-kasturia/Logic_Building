#include<iostream>
using namespace std;

bool Leap_Year(int year)
{
	if(year % 100==0 && year % 400==0)
	{
		return true;
	}
	else if(year % 4==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool check_date(int date,int month,int year)
{
	if(Leap_Year(year)==true)
	{
		int arr[12]={31,29,31,30,31,30,31,31,30,31,30,31};
		
			if(date<=arr[month-1]&&date>0)
			{
				return true;
			}
			else
			{
				return false;
			}
		
	}
	if(Leap_Year(year)==false)
	{
		int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		
			if(date<=arr[month-1]&&date>0)
			{
				return true;
			}
			else
			{
				return false;
			}
		
	}
	return false;
}

int main()
{
	int d,m,y;
	cin>>d>>m>>y;
	bool result=check_date(d,m,y);
	if(result)
	{
		cout<<"Valid Date"<<endl;
	}
	else
		cout<<"Date not Valid"<<endl;

}