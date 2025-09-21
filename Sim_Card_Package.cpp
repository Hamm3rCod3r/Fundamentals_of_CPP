#include "iostream"
using namespace std;
void main()
{
	string package;
	int usage, peak_hrs, total_amount;
	float Bill, add_data;
	cout << "Enter the package type (Basic, Standard, Premium): ";
	cin >> package;
	cout << "Enter the data used (in GB) : ";
	cin >> usage;
	cout << "Enter data used in peak hours: ";
	cin >> peak_hrs;
	if (package == "Basic")
	{
		add_data = (usage - 50) * 2.75;

	}
	else if (package == "Standard")
	{
		add_data = (usage - 100) * 1;
	}
	else if (package == "Premium")
	{
		add_data = (usage - 200) * 0.75;
	}
	if (peak_hrs > 0)
	{
		Bill = add_data + (add_data * 10 / 100) + peak_hrs;
	}
	else
		Bill = add_data;
	cout << "Total monthly charge = " << Bill << "Rs" << endl;
}
