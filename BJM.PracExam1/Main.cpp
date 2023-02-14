// Written by Ben Mentink
// Extra Credit done

#include <iostream>
#include <conio.h>

using namespace std;

float Square(float num1, int OP);
float Cube(float num1, int OP);

int main()
{
	float num1 = 0;
	float num2 = 0;
	char Restart = 'Y';
	while (Restart == 'Y' || Restart == 'y')
	{
		int Operator = 0;
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
			cout << "your answer is: " << Square(num1, 2);
		}
		else if (Operator == 3)
		{
			cout << "your answer is: " << Cube(num1, 3);
		}
		cout << "\nWould you like to input another number? (Y)es or (N)o\n";
		cin >> Restart;
	}
	(void)_getch();
	return 0;
}
float Square(float num1, int OP)
{
	if (OP == 1)return num1;
	else return num1 * Square(num1, OP - 1);
}
float Cube(float num1, int OP)
{
	if (OP == 1) return num1;
	else return num1 * Cube(num1, OP - 1);
}
