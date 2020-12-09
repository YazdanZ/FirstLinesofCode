//gessing game
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <iomanip>
		//std::setw
#include <string.h>
#include <unistd.h>
		//std::sleep
using namespace std;

void Generate_Num(int[]);
void Get_UserInput(int[]);
bool Set_Outputchar(int[], int[], char[]);
void PrintChar(char[]);
void legend();
void StartGame();
void Load();
int main()
{
	int generate[5], userinput[5], counter = 1;
	char p[5], str[1],st1[1];
	system("color 5f");
	for (int i = 0; i<16; i++)
	{
		cout << "**" << setw(5);
	}
	cout << "\nStart The Game\n\nOR Star Wars IV  ";
	cin >> str;
	if (strcmp(str, "game") == 0)
	{
		system("cls");
		StartGame();
	}
	if(strcmp(str,"starwars")==0)
	{
		system("cls");
		system("telnet towel.blinkenlights.nl");
		cout<<"Loading Please Wait ";	
	}
	else
	{
		getch();
		return 0;
	}
}
void legend()//legend function
{
	system("Color f3");
	cout << setw(61);
	for (int d = 0; d<19; d++)
	{
		cout << "*";
	}
	cout << setw(74);//send to top right corner
	cout << "  LEGEND  \n" << endl;
	cout << setw(74) << "# FALSE GUESS";
	cout << setw(80) << "_ TRUE  GUESS";
	cout << setw(80) << "* EXIST";
	cout << setw(67);
	for (int d = 0; d<19; d++)
	{
		cout << "*";
	}
}

void Generate_Num(int a[])
{
	srand(time(0));
	for (int i = 0; i<5; i++)
	{
		a[i] = 1 + rand() % 5;//generate random numbers
	}
}

void Get_UserInput(int a[])
{
	int k;
	for (int i = 0; i<5; i++)
	{
		cin >> a[i];
		if (a[i]>5 || a[i]<1)
		{
			cout << "Enter a valid number from 1-5 \n";
			break;
			for (int i = 0; i<5; i++)
			{
				cin >> a[i];
			}
		}
	}
	for (int g = 0; g<5; g++)
	{
		cout << a[g] << "  ";
	}
	cout << endl;
}

bool Set_Outputchar(int a[], int k[], char y[])
{
	/*char temp[5];
		for (int l = 0; l<5; l++)
	{
		temp[l] = '_';
	}
	*/
	bool g = false;
	for(int i=0 ; i<5 ; i++)
	{
		if(k[i]==a[1] || a[2] || a[3] || a[4] || a[0])
		{
			y[i]='*';
		}
		if(k[i]==a[i])
		{
			y[i]='_';
		}
		else
			y[i]='#';
		if(y[1]=='_' && y[2]=='_' && y[3]=='_' && y[4]=='_' && y[0]=='_')
		{
			g=true;
		}	
	}
	PrintChar(y);
	return g;
}

void PrintChar(char y[])
{
	for (int i = 0; i<5; i++)
		cout << y[i] << "  ";
}

void StartGame()
{
	int generate[5], userinput[5], counter = 1;
	char p[5], str[1],st1[1];
		legend();//legend (top right corner)
		cout << "\ngess 5 numbers :\n";
		Generate_Num(generate);
		Get_UserInput(userinput);
		//Set_Outputchar(generate, userinput, p);
		while (Set_Outputchar(generate, userinput, p) == false)/*repeat
															   functions*/
		{
			sleep(2);
			system("cls");
			cout << "\n";
			legend();
			cout << endl;
			Get_UserInput(userinput);
			Set_Outputchar(generate, userinput, p);
			cout << ++counter << "tries"<<setw(43);
		}
		if (Set_Outputchar(generate, userinput, p) == true)
		{
			system("cls");
			cout << "You Win! With " << counter << " Tries ";
			switch(counter)
			{
				case 1||2||3||4:
				cout<<"\nExellent !!!";
				break;
				default:
				cout<<"\nCan have a better record"; 	
			}
			cout<<"\n\n\t Play Again ? ";
			cin>>st1;
			cout<<"\n";
			system("cls");
			if(strcmp(st1,"yes")==0)
			{
				StartGame();
			}
			else 
			{
				cout<<"bye    ------------    :-(    -------------";
				getch();
			}
		}
	}
	void Load()
	{
		cout<<"Loading Please Wait ";
		int f=0;   			//loading message 
		while (f<3)
		{
			sleep(1);
			cout<<".";
			sleep(1);
			cout<<".";
			sleep(1);
			cout<<".";
			sleep(1);
			cout<<"\b\b\b   \b\b\b";
			f++;
		}
		/*		for(int i=0;i<101;i+=10)
		{	
			cout<<"Loading"<<i<<"%";
			sleep(1);
			system("cls");
		}
		system("cls");
		*/
	}
