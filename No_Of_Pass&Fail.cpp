#include "iostream"
using namespace std;
void main()
{
	int PF, DS, AICT;
	cout << "Enter the marks of PF : ";
	cin >> PF;
	cout << "Enter the marks of DS : ";
	cin >> DS;
	cout << "Enter the marks of AICT : ";
	cin >> AICT;
	int pass = 0, fail = 0;
	if (PF >= 50);
	pass = pass + 1;
	if (DS >= 50)
		pass = pass + 1;
	if (AICT >= 50)
		pass = pass + 1;
	fail = 3 - pass;
	cout << "Total number of subjects Passed = " << pass << endl;
	cout << "Total number of subjects fail = " << fail << endl;
	system("pause");



}

