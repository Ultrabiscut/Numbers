#include <iostream>
using namespace std;

//PROGRAM: Numbers
//AUTHOR: Tyler Timmins
//COURSE: ITSE 1307 2002
//DESCRIPTION: Prompts users to enter four integer values and display
//				sum, product, and average in decimal value.

int main()
{
	//Declare variables
	double dNum1, dNum2, dNum3, dNum4, dSum, dProduct, dAverage;

	//Prompt user for Input
	cout << "Enter the 1st value: ";
	cin >> dNum1;
	cout << "Enter the 2nd value: ";
	cin >> dNum2;
	cout << "Enter the 3rd value: ";
	cin >> dNum3;
	cout << "Enter the 4th value: ";
	cin >> dNum4;

	//Calculate
	dSum = dNum1 + dNum2 + dNum3 + dNum4;
	dProduct = dNum1 * dNum2 * dNum3 * dNum4;
	dAverage = (dNum1 + dNum2 + dNum3 + dNum4) / 4;

	//Display output
	cout << "The Sum is: " << dSum << endl;
	cout << "The Product is: " << dProduct << endl;
	cout << "The Average is: " << dAverage << endl;

	return 0;
}