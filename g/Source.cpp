#include<iostream>
using namespace std;
int main()
{
	int salary, rate, bonus, yearsworked;

	
	cout << "enter your salary: " << endl;
	cin >> salary;

	do {
		salary = ((salary * 0.05) + salary);
		cout << "your annual bonus will be " << "$" << salary << endl;
		break;

	} while (salary != 0);

	cout << "enter your rating, if it's above 7, you might get a bonus! Is your rating above 7? (Enter 1 if yes, Enter 2 if no)" << endl;
	cin >> bonus;

	switch (bonus)
	{
	case 1:
	{
		bonus = salary * 0.02;
		cout << "you get a bonus! your new salary is $" << (salary + (salary * 0.02)) << endl;
		break;
	}
	case 2:
		cout << "sorry your rating is above 7, better luck next time!" << endl;
		break;
	}


}

