/***********************************************************************************
* Name: John Costello
* Date: 5/11/2017
* Project 3
* Description: This program lets two Creatures battle.
***********************************************************************************/


#include "InputValidation.hpp"
#include <limits>
#include <algorithm>


InputValidation::InputValidation()
{
}

char InputValidation::getChar1()
{
	char choice;


	while (!(cin >> choice) || !(isalpha(choice))) {
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max() << '\n');
		cout << "Please enter 'A'" << endl;
	}

	while (choice != 'a' && choice != 'a') {
		cin.clear();
		cout << "Please enter 'A'" << endl;
		cin >> choice;
	}


	return choice;
}


char InputValidation::getChar2()
{
	char choice;


	while (!(cin >> choice) || !(isalpha(choice))) {
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max() << '\n');
		cout << "Please enter 'Y', or 'N'" << endl;
	}

	while (choice != 'y' && choice != 'Y' &&
		choice != 'n' && choice != 'N') {
		cin.clear();
		cout << "Please enter 'Y', or 'N'" << endl;
		cin >> choice;
	}


	return choice;
}

char InputValidation::getChar2ab()
{
	char choice;


	while (!(cin >> choice) || !(isalpha(choice))) {
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max() << '\n');
		cout << "Please enter 'A', or 'B'" << endl;
	}

	while (choice != 'a' && choice != 'a' &&
		choice != 'b' && choice != 'B') {
		cin.clear();
		cout << "Please enter 'A', or 'B'" << endl;
		cin >> choice;
	}


	return choice;
}

char InputValidation::getChar3()
{
	char choice;

	
	while (!(cin >> choice) || !(isalpha(choice))) {
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max() << '\n');
		cout << "Please enter 'A', 'B' or 'C'" << endl;
	}

	while (choice != 'a' && choice != 'A' &&
		   choice != 'b' && choice != 'B' &&
		   choice != 'c' && choice != 'C' ) {
		cin.clear();
		cout << "Please enter 'A', 'B' or 'C'" << endl;
		cin >> choice;
	}

	
	return choice;
}

char InputValidation::getChar4()
{
	char choice;


	while (!(cin >> choice) || !(isalpha(choice))) {
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max() << '\n');
		cout << "Please enter 'A', 'B', 'C', or 'D'" << endl;
	}

	while (choice != 'a' && choice != 'A' &&
		choice != 'b' && choice != 'B' &&
		choice != 'c' && choice != 'C' &&
		choice != 'd' && choice != 'D') {
		cin.clear();
		cout << "Please enter 'A', 'B', 'C', or 'D'" << endl;
		cin >> choice;
	}


	return choice;
}

char InputValidation::getChar5()
{
	char choice;


	while (!(cin >> choice) || !(isalpha(choice))) {
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max() << '\n');
		cout << "Please enter 'A', 'B', 'C', 'D', or 'E'" << endl;
	}

	while (choice != 'a' && choice != 'A' &&
		choice != 'b' && choice != 'B' &&
		choice != 'c' && choice != 'C' &&
		choice != 'd' && choice != 'D' &&
		choice != 'e' && choice != 'E') {
		cin.clear();
		cout << "Please enter 'A', 'B', 'C', 'D', or 'E'" << endl;
		cin >> choice;
	}


	return choice;
}

char InputValidation::getChar6()
{
	char choice;


	while (!(cin >> choice) || !(isalpha(choice))) {
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max() << '\n');
		cout << "Please enter 'A', 'B', 'C', 'D', 'E', or 'F' " << endl;
	}

	while (choice != 'a' && choice != 'A' &&
		choice != 'b' && choice != 'B' &&
		choice != 'c' && choice != 'C' &&
		choice != 'd' && choice != 'D' &&
		choice != 'e' && choice != 'E' &&
		choice != 'f' && choice != 'F') {
		cin.clear();
		cout << "Please enter 'A', 'B', 'C', 'D', 'E' or 'F'" << endl;
		cin >> choice;
	}


	return choice;
}

char InputValidation::getChar7()
{
	char choice;


	while (!(cin >> choice) || !(isalpha(choice))) {
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max() << '\n');
		cout << "Please enter 'A', 'B', 'C', 'D', 'E', 'F' or 'G' " << endl;
	}

	while (choice != 'a' && choice != 'A' &&
		choice != 'b' && choice != 'B' &&
		choice != 'c' && choice != 'C' &&
		choice != 'd' && choice != 'D' &&
		choice != 'e' && choice != 'E' &&
		choice != 'f' && choice != 'F' &&
		choice != 'g' && choice != 'G') {
		cin.clear();
		cout << "Please enter 'A', 'B', 'C', 'D', 'E', 'F', or 'G'" << endl;
		cin >> choice;
	}


	return choice;
}

char InputValidation::getChar9()
{
	char choice;


	while (!(cin >> choice) || !(isalpha(choice))) {
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max() << '\n');
		cout << "Please enter 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', or 'F' " << endl;
	}

	while (choice != 'a' && choice != 'A' &&
		choice != 'b' && choice != 'B' &&
		choice != 'c' && choice != 'C' &&
		choice != 'd' && choice != 'D' &&
		choice != 'e' && choice != 'E' &&
		choice != 'f' && choice != 'F' &&
		choice != 'g' && choice != 'G' &&
		choice != 'h' && choice != 'H' &&
		choice != 'i' && choice != 'I') {
		cin.clear();
		cout << "Please enter 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', or 'I'" << endl;
		cin >> choice;
	}


	return choice;
}

int InputValidation::getInt() {

	int input;
	
	
	while(!(cin >> input)) {

		if (cin.fail()) {
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "Please enter a number." << endl;
		}

		
	}


	
		return input;
}

string InputValidation::getString()
{
	string input;

	while (!(getline(cin, input))) {
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Please enter a string." << endl;
	}

	return input;
}

int InputValidation::getInt2() {

	string number;
	int input = 0;


	while (std::getline(std::cin, number) && number.end() !=
		std::find_if_not(number.begin(), number.end(), &isdigit))
	{
	
		cout << "Please enter numbers only" << endl;
	} 
	
	// http://stackoverflow.com/questions/35954159/how-can-i-validate-an-integer-input

	if (number[0] > 0)
		input = stoi(number);


	return input;
}

/*char InputValidation::getChar()
{
	char input[0];

	while (std::getline(std::cin, number) && number.end() !=
		std::find_if_not(number.begin(), number.end(), &isdigit))
	{

		cout << "Please enter numbers only" << endl;
	}
}*/

int InputValidation::getIntMenu(int max)
{
	
	string number;
	int input = 0;


	while (std::getline(std::cin, number) && number.end() !=
		std::find_if_not(number.begin(), number.end(), &isdigit))
	{

		cout << "Please enter numbers only" << endl;

		if (number[0] > max)
		{
			cout << "Please select one of the options. " << endl;
		}
	}

	// http://stackoverflow.com/questions/35954159/how-can-i-validate-an-integer-input

	if (number[0] > 0)
		input = stoi(number);

	
	return input;

}
