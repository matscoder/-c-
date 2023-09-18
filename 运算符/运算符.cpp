#include<iostream>
using namespace std;

int main()
{
	//加减乘除
	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1/b1 << endl;

	//两个小数可以相除
	double d1 = 0.5;
	double d2 = 0.25;
	cout << d1 / d2 << endl;

	//两个小数不可以做取模运算
	double d1 = 3.14;
	double d2 = 1.1;
	//cout << d1 % d2 << endl;
	system("pause");

	return 0;

}  