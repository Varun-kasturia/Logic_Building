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
void Output(int day)
{
	
	switch(day)
	{
	case 0:
	cout<<"Sunday"<<endl;
	break;
	case 1:
	cout<<"Monday"<<endl;
	break;
	case 2:
	cout<<"Tuesday"<<endl;
	break;
	case 3:
	cout<<"Wednesday"<<endl;
	break;
	case 4:
	cout<<"Thursday"<<endl;
	break;
	case 5:
	cout<<"Friday"<<endl;
	break;
	case 6:
	cout<<"Saturday"<<endl;
	break;
	default:
	cout<<"Can't Calculate"<<endl;
	}
}

int Extra_Days(int day,int month,int year)
{
	if(Leap_Year(year)==false)
	{
		int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		int i=0;
		int Total_Days=0;
		while(month!=i+1)
		{
			
			Total_Days=Total_Days+arr[i];
			i++;
		}
		Total_Days=Total_Days+day;
		int Extra_Day=Total_Days%7;
		return Extra_Day;

	}
	else
	{
		int arr[12]={31,29,31,30,31,30,31,31,30,31,30,31};
		int i=0;
		int Total_Days=0;
		while(month!=i+1)
		{
			
			Total_Days=Total_Days+arr[i];
			i++;
		}
		Total_Days=Total_Days+day;
		int Extra_Day=Total_Days%7;
		return Extra_Day;
	}
}

int main()
{
	int d,m,y;
	cin>>d>>m>>y;
	int cy=y-1;
	int a=cy%400;
	int b=a%100;
	int ed=(a/100)*5+b+(b/4);
	for(int i=0;i<m;i++)
	{
		ed=ed+Extra_Days(d,m,y);
	}
	Output(ed%7);

}