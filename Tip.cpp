#include "iostream"
using namespace std;
void main()
{
	int bill;
	cout << "Total bill = ";
	cin >> bill;
	float tip;
	cout << "Enter the tip percent: ";
	cin >> tip;
	float tip_bill;
	tip_bill = (bill * tip) / 100;
	float final;
	final = bill + tip_bill;
	cout << "Final total= " << final;
	system("pause");


}
