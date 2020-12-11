#include <iostream>
#include <conio.h>
using namespace std;

void input (int [],int );
void print (int [],int );
void search (int [],int );
int sort (int [],int );
void maxandmin (int [],int);
int repetition (int [],int );
void erasearr (int [],int );

int main()
{
	const int n=10;
	int myarray[n];
	cout<<"input function \n";
	input (myarray,n);
	cout<<"print function \n";
	print (myarray,n);
	search (myarray,n);
	cout<<sort (myarray,n);
	maxandmin (myarray,n);
	repetition (myarray,n);
	erasearr (myarray,n);
	getch();
	return 0;
}

void input (int arr[],int n)
{
	cout<<"enter the numbers :\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
}

void print (int arr[],int n)
{
	cout<<"the numbers are : \n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
		cout<<" ";
	}
	cout<<endl;
	
}

void search (int arr[],int n)
{
	bool o=false;
	int k;
	cout<<"enter number to search : ";
	cin>>k;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==k)
		{
			bool o=true;
			break;	
		}
	}
	if(o)
	{
		cout<<"exists/n";
	}
	else {
		cout<<"doesnt exist/n";
	}
}
int sort (int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
 	} 
 	print (arr,n);
}

void maxandmin (int arr[],int n)
{
	int b[2];
	b[0]=arr[0];//min
	b[1]=arr[0];//max
	for(int i=0;i<n;i++)
	{
		if(arr[i]<b[0])
		{
			b[0]=arr[i];
		}
		if(arr[i]>b[1])
		{
			b[1]=arr[i];
		}
	}
	cout<<"min is : "<<b[0]<<endl;
	cout<<"max is : "<<b[1]<<endl;
}

int repetition(int arr[],int n)
{
	bool f=false;
	for(int j=0;j<n-1;j++)
	{
		for(int i=0;i<n;i++)
		{
			if(arr[i]==arr[i+1])
				{
					f=true;
				}
		}
	}
	if(f)
	{
		cout<<"it has repetetive numbers"<<endl;
	}
	else
	{
		cout<<"doesnt have repetetive numbers"<<endl;
	}
	return f;
}

void erasearr (int arr[],int n)
{
	for(int i=0;i<n;++i)
		for(int j=i+1;j<n;)
		{
			if(arr[i]==arr[j])
			{
				for(int k=j;k<n-1;k++)
					arr[k]=arr[k+1];
					n--;
			}
			else 
			--j;
		}
		cout<<"\n";
		for(int i=0;i<n;i++)
	{
		cout<<arr[i];
		cout<<" ";
	}
	cout<<endl;
}
