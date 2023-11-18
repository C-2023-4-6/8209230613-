/*#include <iostream>
using namespace std;
int main()
{
	char a;
	
	int letter = 0;
	int space = 0;
	int number = 0;
	int other = 0;
	while ((a = getchar()) && (a != 'n'))
	{
		if (a >= 97 && a <= 122 || a >= 65 && a <= 90)
			letter + 1;
		else if (a >= '0' && a <= '9')
			number + 1;
		else if (a == ' ')
			space + 1;
		else
			other + 1;

	}
	cout << "英文字母的个数为：" << letter << endl;
	cout << "数字的个数为：" << number << endl;
	cout << "空格的个数为：" << space << endl;
	cout << "其他字符的个数为：" << other << endl;
	return 0;
}
*/