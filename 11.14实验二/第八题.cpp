/*#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a;
	cout << "������һ�����ּ�������ƽ������";
	cin >> a;
	if (a <= 0)
	{
		cout << "������һ������0������";
		cin >> a;

	}
	double x0 = a;
	double x1 = (x0 + a / x0) / 2;
	while (x1 - x0<1e-5 && x1 - x0>-1e-5)
	{
		x0 = x1;
		x1 = (x0 + a / x0) / 2;
	}



	cout << setprecision(4)<<x1;
	return a;



}

*/
