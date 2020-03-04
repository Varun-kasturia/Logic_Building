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
		
			if(date<=arr[month-1]&&date>0&&month<=12)
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
		
			if(date<=arr[month-1]&&date>0&&month<=12)
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
int correct_date(int date,int month,int year)
{

	while(month>12)
			{
				year=year+(month/12);
				month=month%12;
				
			}
	if(Leap_Year(year)==true)
	{
		int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	while(date>arr[month-1])
			{
				int x=arr[month-1];
				month=month+(date/x);
				date=date%x;
			
			}
	}
	else{
	int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	while(date>arr[month-1])
			{
				int x=arr[month-1];
				month=month+(date/x);
				date=date%x;
			
			}
	}
	cout<<date<<"/"<<month<<"/"<<year<<endl;
	return 0;
}

// int correct_date(int date,int month,int year)
// {
// 	if(Leap_Year(year)==true)
// 	{
// 		int arr[12]={31,29,31,30,31,30,31,31,30,31,30,31};
		

// 			while(month>12)
// 			{
// 				year=year+(month/12);
// 				month=month%12;
				
// 			}
// 			while(date>arr[month-1])
// 			{
// 				month=month+(date/arr[month-1]);
// 				date=date%arr[month-1];
			
// 			}
			
// 			while(month>12)
// 			{
// 				year=year+(month/12);
// 				month=month%12;
				
// 			}
// 			while(date>arr[month-1])
// 			{
// 				month=month+(date/arr[month-1]);
// 				date=date%arr[month-1];
				
// 			}
			
// 			cout<<date<<"/"<<month<<"/"<<year<<endl;
		
// 	}
// 	if(Leap_Year(year)==false)
// 	{
// 		int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		

// 			while(month>12)
// 			{
// 				year=year+(month/12);
// 				month=month%12;
			
// 			}

// 			while(date>arr[month-1])
// 			{
// 				month=month+(date/arr[month-1]);
// 				date=date%arr[month-1];
			
// 			}
			
// 			while(month>12)
// 			{
// 				year=year+(month/12);
// 				month=month%12;
				
			
// 			}
// 			while(date>arr[month-1])
// 			{
// 				month=month+(date/arr[month-1]);
// 				date=date%arr[month-1];
				
// 			}
			
// 		cout<<date<<"/"<<month<<"/"<<year<<endl;
// 	}
// 	return 0;
// }

int Add_Date(int date,int date2,int month,int month2,int year,int year2)
{
	int new_date=date+date2;
	int new_month=month+month2;
	int new_year=year+year2;
	if(check_date(new_date,new_month,new_year)==true)
	{
		cout<<new_date<<"/"<<new_month<<"/"<<new_year<<endl;
	}
	else
		{
			correct_date(new_date,new_month,new_year);
		}

	return 0;
}


int main()
{
	int d2,m2,y2,d1,m1,y1;
	cout<<"Enter Date"<<endl;
	cin>>d1>>m1>>y1;
	cout<<"Enter Date to be added"<<endl;
	cin>>d2>>m2>>y2; 
	Add_Date(d1,d2,m1,m2,y1,y2);

}