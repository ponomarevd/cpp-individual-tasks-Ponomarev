#include <iostream>
#include "test.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    test a;

    cout << "Введите номер задания: ";
    int exercise;
    cin >> exercise;
    switch (exercise) {
        case 1:
            cout << "------1------" << endl;
            double b; int c;
            cout << "1 значение: " && cin >> b;
            cout << "2 значение: " && cin >> c;
            cout << a.PowDI(b, c) << endl;
            break;
        case 2:
            cout << "------2------" << endl;
            double d, m;
            cout << "1 значение: " && cin >> d;
            cout << "2 значение: " && cin >> m;
            cout << a.PowDD(d, m) << endl;
            break;
        case 3:
            cout << "------3------" << endl;
            unsigned int f, g;
            cout << "1 значение: " && cin >> f;
            cout << "2 значение: " && cin >> g;
            cout << a.DoubleInt(f, g) << endl;
            break;
        case 4:
            cout << "------4------" << endl;
            unsigned int h, j;
            cout << "Номинал: " && cin >> h;
            cout << "Количество: " && cin >> j;
            cout << a.MoneyCounter(h, j) << endl;
            break;
        case 5:
            cout << "------5------" << endl;
            double t; int y;
            cout << "Цена товара: " && cin >> t;
            cout << "Количество: " && cin >> y;
            cout << a.PriceOfGood(t, y) << endl;
            break;
        case 6:
            cout << "------6------" << endl;
            int calo; double mass;
            cout << "Общая калорийность: " && cin >> calo;
            cout << "Общая масса: " && cin >> mass;
            cout << a.ProductСalories(calo, mass) << endl;
            break;
        case 7:
            cout << "------7------" << endl;
            double left, right, num;
            cout << "Левая граница: " && cin >> left;
            cout << "Правая граница: " && cin >> right;
            cout << "Число: " && cin >> num;
            if (a.IsNumberInRange(left, right, num)) cout << "Число принадлежит диапазону" << endl;
            else cout << "Число не принадлежит диапазону" << endl;
            break;
        case 8:
            cout << "------8------" << endl;
            break;
        default:
            cout << "Такой задачи нет." << endl;
            return 0;
    }
}
