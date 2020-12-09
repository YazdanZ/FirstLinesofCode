//get average,variant and c
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main()
{
	double x[10],var=0,avg,sum,c;
	
	for(int i=0;i<10;i++)
	{
		cin>>x[i];//get x[i] 10 times
	}
	for(int j=0;j<10;j++)
	{
		sum+=x[j];//add sum to sum 10 times
	}
	avg=sum/10;
	
	for(int i=0;i<10;i++)
	{
		var+=((avg-x[i])*(avg-x[i]));//calculate var
	}
	var/=10;
	c=sqrt(var)/avg;
	
	cout<<"average="<<avg<<endl;
	cout<<"variant="<<var<<endl;
	cout<<"c="<<c<<endl;
	
	getch();
	return 0;		
}
