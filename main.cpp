#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	double a, b, c;
	char z;
	double procent;

	cout << "Первое число : ";
	cin >> a;
	cout << "Второе число: ";
	cin >> b;
	cout << "Действие: ";
	cin >> z;
	switch (z)
	{
	case '+': c = a + b;
		// cout «"результат: "« c «endl;
		break;

	case '-': c = a - b;
		// cout «"результат: "«c«endl;
		break;

	case '*': c = a * b;
		// cout «"результат: "«c«endl;
		break;

	case '/': c = a / b;
		// cout «"результат: "«c«endl;
		break;


	default: cout << "Не верное значение.";
	}
	cout << "результат: " << c << endl;

}