#include "iostream"
using namespace std;
void main()
{
	int income, expenses, duration, final;
	float expense_per, after_tax, total_income;
	cout << "Enter your total income: ";
	cin >> income;
	cout << "Enter your expenses: ";
	cin >> expenses;
	cout << "Enter the duration of your free lancing: ";
	cin >> duration;

	expense_per = (expenses * 100) / income;

	if (income <= 10000) {
		cout << "No Tax";
	}
	else if (income > 10001 && income <= 30000)
	{
		after_tax = income - (income * 10 / 100);
		if (expense_per > 30)
		{
			total_income = after_tax + (after_tax * 5 / 100);
		}
		else
			total_income = after_tax;
	}
	else if (income > 30001 && income <= 60000)
	{
		after_tax = income - (income * 20 / 100);
		if (expense_per > 30)
		{
			total_income = after_tax + (after_tax * 5 / 100);
		}
		else
			total_income = after_tax;
	}
	else
	{
		after_tax = income - (income * 30 / 100);
		if (expense_per > 30)
		{
			total_income = after_tax + (after_tax * 5 / 100);
		}
		else
			total_income = after_tax;
	}
	if (duration > 3)
	{
		final = total_income + (total_income * 10 / 100);
	}
	else
		final = total_income;
	cout << "Your total monthly income is = " << final;
	system("pause");
}


