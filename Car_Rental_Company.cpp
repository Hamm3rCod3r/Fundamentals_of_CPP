#include "iostream"
using namespace std;
void main()
{
	float compact, SUV, luxury;
	cout << "Enter the distance(KM) travelled by Compact car: ";
	cin >> compact;
	cout << "Enter the distance(KM) travelled by SUV car: ";
	cin >> SUV;
	cout << "Enter the distance(KM) travelled by luxury car: ";
	cin >> luxury;
	int compact_cost, SUV_cost, luxury_cost, Total;
	compact_cost = (compact * 700);
	SUV_cost = (SUV * 1500);
	luxury_cost = (luxury * 3000);
	Total = compact_cost + SUV_cost + luxury_cost;
	cout << "Total rent cost of Compact car : " << compact_cost << endl;
	cout << "Total rent cost of SUV car : " << SUV_cost << endl;
	cout << "Total rent cost of Luxury car : " << luxury_cost << endl;
	cout << "Total cost : " << Total << endl;
	system("pause");
}
