#include "iostream"
using namespace std;
void main()
{
	int amount;
	float dis;
	cout << "Enter the total amount purchased: ";
	cin >> amount;

	if (amount < 100)
	{
		cout << "No discount";
	}


	else if (amount >= 100 && amount <= 500)
	{
		dis = amount - ((amount * 10 / 100));
		cout << "10% Discount amount = " << dis;
	}
	else
	{
		dis = amount - ((amount * 20 / 100));
		cout << "20% Discount amount = " << dis;
	}
	system("pause");

}
