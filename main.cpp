#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	double a, b, c;
	char z;
	double procent;

	cout << "������ ����� : ";
	cin >> a;
	cout << "������ �����: ";
	cin >> b;
	cout << "��������: ";
	cin >> z;
	switch (z)
	{
	case '+': c = a + b;
		// cout �"���������: "� c �endl;
		break;

	case '-': c = a - b;
		// cout �"���������: "�c�endl;
		break;

	case '*': c = a * b;
		// cout �"���������: "�c�endl;
		break;

	case '/': c = a / b;
		// cout �"���������: "�c�endl;
		break;


	default: cout << "�� ������ ��������.";
	}
	cout << "���������: " << c << endl;

}