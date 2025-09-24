#include "iostream"
using namespace std;
void main()
{
	int monthly, time, over_time, per_hour, over_salary, total;
	cout << "Enter your monthly salary ";
	cin >> monthly; // this is salary of40hrs
	cout << "Enter number of hours worked: ";
	cin >> time;
	over_time = time - 40;
	per_hour = monthly / 40;
	over_salary = over_time * per_hour;
	total = monthly + over_salary;
	if (time > 40)
	{
		cout << "monthly salary = " << monthly << endl;
		cout << "overtime salary = " << over_salary << endl;
		cout << "Total salary = " << total << endl;
	}
	else
	{
		cout << "Monthly salary = " << monthly << endl;

	}
	system("pause");



}
