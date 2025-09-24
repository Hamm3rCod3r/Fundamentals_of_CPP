#include "iostream"
using namespace std;
void main()
{
	float dis, speed, time;
	cout << "Enter the Distance(km) Travelled: ";
	cin >> dis;
	cout << "Enter the travelling speed: ";
	cin >> speed;
	time = dis / speed;

	int hrs = time;
	float min = (hrs - time) * 60;

	int sc = min;
	int sec = (sc - min) * 60;
	cout << "Time taken= " << hrs << "hrs " << min << "mins " << sec << "sec";


	system("pause");
}
