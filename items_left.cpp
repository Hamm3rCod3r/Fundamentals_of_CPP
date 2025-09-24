#include "iostream"
using namespace std;
void main()
{
	int item, person;
	cout << "Enter the total number of items: ";
	cin >> item;
	cout << "Enter the no of persons: ";
	cin >> person;
	int per_person = item / person;
	cout << "Number of items distributed to per person: " << per_person << endl;
	int left = item % person;
	cout << "Number of items left after equal distribution: " << left << endl;
	system("pause");
}
