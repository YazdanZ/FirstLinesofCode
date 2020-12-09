//fibunachi ba tabe bargashti
#include <iostream>
#include <conio.h>
using namespace std;

int fibunachi(int x,int y)
{
	int temp;
	temp=x+y;
	cout<<"   "<<temp;
	if(temp>10000)
	{
		return temp;
	}
	
	fibunachi(y,temp);
}

int main()
{
	cout<<"1  1";
	fibunachi(1,1);
	getch();
	return 0;
}
