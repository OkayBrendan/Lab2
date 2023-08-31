// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	float A;
	float B;
	float X;

	// Introduction 
	cout << "Hello! My name is Brendan and my program will be assisting you in solving your equation: \nAx + B = 0 \nFor x\n" << endl; 
	
	// Value Entering
	cout << "Please enter a value for A: ";
	cin >> A;

	cout << "Please enter a value for B: ";
	cin >> B;

	// Solving
	cout << "\nSolving " << A << "x+" << B << "=0 for x..." << endl;

	// Math
	X = (-B / A);
	cout << "\nThe answer is:\nx=" << X << "\n\nThank you! Have a good day. :)" << endl;
}
