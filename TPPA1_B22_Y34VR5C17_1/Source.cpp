#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// Declare a variables to hold the user's menu selections.
	int menuSelection;
	string confirmationMenu;

	//Declare variables for user selection
	int regular = 1, student = 2, family = 3;
	string yes = "y", no = "n";

	// Declare variables to hold user's input
	int regularTotal, studentTotal, familyTotal;

	//Declare variables to hold calculated total
	int regularCost, studentCost, familyCost;

	// Display the menu.
	cout << " **************************************\n";
	cout << "WELCOME TO SILVER EXPRESS THEME PARK \n";
	cout << " **************************************\n";
	cout << "Please select from the following: \n";
	cout << "\n";
	cout << "1. Regular adult tickets at R30 per person.\n";
	cout << "2. Student tickets at R25 per person.\n";
	cout << "3. Family ticket for two adults and two children is R75, with an additional R15 for each child beyond two children.\n";
	cout << endl;

	// Prompt the user for a selection
	cout << "Please enter your selection.\n";
	cin >> menuSelection;

	// Validate the menu selection
	while (menuSelection < 1 || menuSelection > 4)
	{
		cout << "That is an invalid selection.\n";
		cout << "Please enter either 1, 2, or 3.\n";
		cin >> menuSelection;
	}

	// Perform the selected operation.
	if (menuSelection == regular) {
		// if condition is true then print the following
		cout << "You have opted to purchase a regular ticket. How many do you require?\n";
		cin >> regularTotal;
		// Should the user try to enter zero when prompted, display this.
		while (regularTotal < 0 || regularTotal == 0)
		{
			cout << "That is an invalid entry.\n";
			cout << "Please enter the number of people who wish to include in your ticket purchase. The number cannot be 0.\n";
			cin >> regularTotal;
		}
		//Calculate total to display
		regularCost = regularTotal * 30;
		cout << "You have entered " << regularTotal << ". Your total is: R " << regularCost << endl;

	}
	else if (menuSelection == student) {
		// if condition is true then print the following
		cout << "You have opted to purchase a student ticket. How many do you require?\n";
		cin >> studentTotal;

		//Prevents the user from entering zero
		while (studentTotal < 0 || studentTotal == 0)
		{
			cout << "That is an invalid entry." << endl;
			cout << "Please enter the number of people who wish to include in your ticket purchase. The number cannot be 0.\n";
			cin >> studentTotal;
		}
		//Calculate total to display
		studentCost = studentTotal * 25;
		cout << "You have entered " << studentTotal << ". Your total is: R " << studentCost << endl;
	}
	else
	{
		//Ensures the user enters either y or n
		while (confirmationMenu != "y" || confirmationMenu != "n")
		{
			// if condition is true then print the following
			cout << "You have opted to purchase a family ticket. Do you have more than 2 children joining you?. Y(es) or (N)o \n";
			cin >> confirmationMenu;

			if (confirmationMenu == "y") {
				cout << "How many additional children will be joining you?\n";
				cin >> familyTotal;
				// Should the user try to enter zero when prompted, display this.
				while (familyTotal < 0 || familyTotal == 0)
				{
					cout << "That is an invalid entry." << endl;
					cout << "Please enter the number of people who wish to include in your ticket purchase. The number cannot be 0.\n";
					cin >> familyTotal;
				}
				//Calculate total to display
				familyCost = 75 + (familyTotal * 15);
				cout << "Your total cost is: R " << familyCost << endl;
				return 0;
			}
			else if (confirmationMenu == "n")
			{
				familyCost = 75 * 1;
				cout << " Your total is: R " << familyCost << endl;
				return 0;
			}
			else
			{
				cout << "That is not a valid entry. Please enter (Yes) or (N)o to continue\n";
				cout << "" << endl;
			}
		}
	}return 0;
}