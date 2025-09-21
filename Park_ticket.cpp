#include "iostream"
using namespace std;
void main()
{
	int age;
	float  dis;
	cout << "Enter the age of visitors : ";
	cin >> age;
	if (age < 12)
	{
		dis = 20 - (20 * 0.5);
		cout << "Admission cost of children : " << dis;
	}
	else if (age >= 12 && age <= 64)
	{
		dis = 20 - 0;
		cout << "Admission cost of Adults : " << dis;
	}
	else
	{
		dis = 20 - (20 * 0.25);
		cout << "admission cost of seniors : " << dis;
	}
	system("pause");
}
