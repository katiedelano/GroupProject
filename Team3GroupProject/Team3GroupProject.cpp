//	CSC301 Group Assignment
//	
//  Group Members: Katie Delano, Riley Finn, Mohamed Mohamed, Zach Petersen
//  Advanced Calculator


#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
General Program Outline
Take user input
Validate
Perform mathematical operations
Return the solution
*/

int main()
{
	int arrayLength;
	vector<string> parsedInput;
	
	// Prompt user for equation
	
	// Parse each number/operator into an array object (delimiters should be " ", "+", "-", "*", "/"...)
	

	parsedInput.push_back("Test");
	parsedInput.push_back("Test2");

	
	// Iterate through array looking for operators

	for (int i = 0; i < parsedInput.size(); i++)
	{
		// When an operator is found, pass it and it's neighboring elements to the mathFunction	


		if (parsedInput[i] == "+" || parsedInput[i] == "-" || parsedInput[i] == "*" || parsedInput[i] == "/")
		{
			string result = mathFunction(stod(parsedInput[i - 1]), (parsedInput[i]), stod(parsedInput[i + 1]));
			parsedInput[i - 1].erase();
			parsedInput[i + 1].erase();
			parsedInput[i] = result;
			i = 0;
			// Replace 3 array elements with the method result

			// Repeat until no operators exist and array length is 1
		}

	}

	
	// Print the equation and solution for the user
	
	
	
	cout << "Testing 1,2,3" << endl;
	cout << "Testing 4,5,6" << endl;
	//This is a placeholder
}

string mathFunction(double value1, string op, double value2)
{
    double answer = 0;  //initialize answer variable
    
    if (op == "+")
    {
        answer = value1 + value2;   
    }
    
    else if (op == "-")
    {
        answer = value1 - value2;
    }
    
    else if (op == "*")
    {
        answer = value1 * value2;        
    }
    else if (op == "/")
    {
        answer = value1 / value2;
    }
    return answer;
