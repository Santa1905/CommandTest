#include<iostream>
using namepsace std;
void main()
{
    int var1, var2;

    cout << "Программа сложения, вычитания, умножения, деления  2х чисел \n";

    cout << "Введите первое число:";
    cin >> var1;

    cout << "Введите второе число:";
    cin >> var1;

    cout << "Введите операцию над числами(+,-,*,/):";

    char oper;

    while ((oper = cin.get()) != EOF) {
        switch (oper) {
        case '+':
            cout << "Сумма ровна: " << val1 + val2 << endl;
            break;
        case '-':
            cout << "Разность ровна: " << val1 - val2 << endl;
            break;
        case '*':
            cout << "Произведение равно: " << val1 * val2 << endl;
            break;
        case '/':
            cout << "Частное равно: " << val1 / val2 << endl;
            break;

        default:
            cout << "Вы ввели неверную операцию" << endl;
            break;
        }
    }
}