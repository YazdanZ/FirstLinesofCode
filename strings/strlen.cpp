#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
	int i;
	char s;
	char*p;
	p=&s;
	cin>>s;
	for(int i=0;i<strlen(p);i++)
	{
	p[i]-=32;
	}
	cout<<s;
	return 0;
}
