#include "iostream"
using namespace std;
void main()
{
	int salary, years;
	float bonus;
	cout << "Enter your annual salary: ";
	cin >> salary;
	cout << "Enter Years of service: ";
	cin >> years;
	if (years < 2)
		cout << "No bonus";
	else if (years >= 2 && years <= 5)
	{
		bonus = salary + ((salary * 5) / 100);
		cout << "5% Percent bonus = " << bonus;
	}
	else
	{

		bonus = salary + ((salary * 10) / 100);
		cout << "10% Percent bonus = " << bonus;
	}

}

