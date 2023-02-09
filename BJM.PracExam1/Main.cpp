#include <iostream>
#include <conio.h>

using namespace std;

float Square(float num1);
float Cube(float num1);

int main()
{
	float num1 = 0;
	float num2 = 0;
	int Operator = 0;
	char Restart = 'Y';
	while (Restart == 'Y' || Restart == 'y')
	{
		cout << "Welcome to the basic calculator - App Developed by Ben Mentink\n INSTRUCTIONS\n";
		cout << "Input a number folowed by the enter key then input the oportator followed by the enter key\n";
		cout << "This app accepts Squaring (2) or Cubing (3)\n";
		cout << "Input the first number:";
		cin >> num1;
		while (Operator !=2 && Operator !=3)
		{
			cout << "Input either 2 or 3 as a oporator:";
			cin >> Operator;
		}
		if (Operator == 2)
		{
			cout << Square(num1);
		}
		else if (Operator == 3)
		{
			cout << Cube(num1);
		}
		cout << "\nWould you like to input another number? (Y)es or (N)o\n";
		cin >> Restart;
	}
	(void)_getch();
	return 0;
}
float Square(float num1)
{
	return(num1 * num1);
}
float Cube(float num1)
{
	return(num1 * num1 * num1);
}
