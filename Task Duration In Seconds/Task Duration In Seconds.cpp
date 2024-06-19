							/* Program to calculate the task duration in seconds then print it on screen */
#include <iostream>
#include <cmath>
using namespace std;


int main()

{

	float Number_Of_Days, Number_Of_Hours, Number_Of_Minutes, Number_Of_Secodns;
	cout << "enter Number of days " << endl;
	cin >> Number_Of_Days;

	cout << "enter Number of Hours " << endl;
	cin >> Number_Of_Hours;

	cout << "enter Number of Minutes " << endl;
	cin >> Number_Of_Minutes;

	cout << "enter Number of Seconds " << endl;
	cin >> Number_Of_Secodns;

	//===============================  Calculations  ========================================//


	float Total_Seconds = (Number_Of_Days * 24 * 60 * 60) + (Number_Of_Hours * 60 * 60) + (Number_Of_Minutes * 60) + Number_Of_Secodns;

	cout << "Total Seconds = " << Total_Seconds << endl;


	return 0;

	// Created by @ilyes_Trabelsi

}

