#include "iostream"
using namespace std;
void main()
{
	int bill, friends;
	cout << "Enter total bill:";
	cin >> bill;
	cout << "Enter the persons: ";
	cin >> friends;
	float Per_person;
	Per_person = bill / friends;
	cout << "Per person bill: " << Per_person << endl;
	system("pause");
}
