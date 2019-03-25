#include "Complex.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	char q;
	Complex chis1;
	Complex chis2;
	Complex otv;
	cout << "Введите 1 комплексное число Re, Im" << endl;
	cin >> chis1.re;
	cin >> chis1.im;
	cout << "Введите 2 комплексное число Re, Im" << endl;
	cin >> chis2.re;
	cin >> chis2.im;
	cout << "Введите операцию" << endl;
	cin >> q;
	if (q == '+')
		otv = slozh(chis1, chis2);
	if (q == '-')
		otv = vich(chis1, chis2);
	if (q == '*')
		otv = umn(chis1, chis2);
	if (q == '/')
		otv = del(chis1, chis2);
	cout << otv.re << " + (" << otv.im << ")i";
	system("pause");
}
