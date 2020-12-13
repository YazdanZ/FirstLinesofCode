//typea random value
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
using namespace std;

void randomtest()
{
	srand(time(0)); // init Rand() function
	int j = rand();
	cout<<j;
	return j;
}
int main()
{
	randomtest();
	getch();
	return 0;
	
}

