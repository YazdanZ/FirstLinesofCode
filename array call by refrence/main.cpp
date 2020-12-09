#include <iostream>
#include <conio.h>
using namespace std;

int print(int &);
int get(int &);
int search(int &);

int main()
{
	int arr[10];
	get(arr[10]);
	print(arr[10]);
	search(arr[10]);
	getch();
	return 0;
}

int get(int &x)
{
	int arr[10];
	cout<<"enter the ten numbers"<<"\n";
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	return 0;
}

int print(int &y)
{
	int arr[10];
	cout<<"here are the numbers :"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<"  ";
	}
	return 0;
}

int search(int &z)
{
	int arr[10],num,i=0;
	cin>>num;
	for(int i=0;i<10;i++)
	{
		if(*(&arr[i])==num)
		{
		break;
		cout<<i;
		}
	}
	return 0;
}
