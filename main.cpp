#include <iostream>
#include "test.h"
#include <windows.h>
#include "Date1.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    test a;
    Date1 date1;
    double firstD, secondD, thirdD;
    int firstI, secondI, thirdI;
    cout << "Введите номер задания: ";
    int exercise;
    cin >> exercise;

    switch (exercise) {
        case 1:
            cout << "------1------" << endl;
            cout << "1 значение: " && cin >> firstD;
            cout << "2 значение: " && cin >> firstI;
            cout << a.PowDI(firstD, firstI) << endl;
            break;
        case 2:
            cout << "------2------" << endl;
            cout << "1 значение: " && cin >> firstD;
            cout << "2 значение: " && cin >> secondD;
            cout << a.PowDD(firstD, secondD) << endl;
            break;
        case 3:
            cout << "------3------" << endl;
            cout << "1 значение: " && cin >> firstI;
            cout << "2 значение: " && cin >> secondI;
            cout << a.DoubleInt(firstI, secondI) << endl;
            break;
        case 4:
            cout << "------4------" << endl;
            cout << "Номинал: " && cin >> firstI;
            cout << "Количество: " && cin >> secondI;
            cout << a.MoneyCounter(firstI, secondI) << endl;
            break;
        case 5:
            cout << "------5------" << endl;
            cout << "Цена товара: " && cin >> firstD;
            cout << "Количество: " && cin >> firstI;
            cout << a.PriceOfGood(firstD, firstI) << endl;
            break;
        case 6:
            cout << "------6------" << endl;
            cout << "Общая калорийность: " && cin >> firstI;
            cout << "Общая масса: " && cin >> firstD;
            cout << a.ProductСalories(firstI, firstD) << endl;
            break;
        case 7:
            cout << "------7------" << endl;
            cout << "Левая граница: " && cin >> firstD;
            cout << "Правая граница: " && cin >> secondD;
            cout << "Число: " && cin >> thirdD;
            if (a.IsNumberInRange(firstD, secondD, thirdD)) cout << "Число принадлежит диапазону" << endl;
            else cout << "Число не принадлежит диапазону" << endl;
            break;
        case 8:
            cout << "------8------" << endl;
            cout << "Левая граница: " && cin >> firstI;
            cout << "Правая граница: " && cin >> secondI;
            cout << "Число: " && cin >> thirdI;
            if (a.IsNumberInRange2(firstI, secondI, thirdI)) cout << "Число принадлежит диапазону" << endl;
            else cout << "Число не принадлежит диапазону" << endl;
            break;
        case 9:
            cout << "------9------" << endl;
            cout << "Часы: " && cin >> firstI;
            cout << "Минуты: " && cin >> secondI;
            cout << a.HoursToMinutes(firstI, secondI) << endl;
            break;
        case 10:
            cout << "------10------" << endl;
            cout << "X: " && cin >> firstD;
            cout << "Y: " && cin >> secondD;
            cout << a.DistXY(firstD, secondD) << endl;
            break;
        case 11:
            cout << "------11------" << endl;
            cout << "Оклад: " && cin >> firstD;
            cout << "Отработано дней: " && cin >> secondI;
            cout << a.Salary(firstD, secondI) << endl;
            break;
        case 12:
            cout << "------12------" << endl;
            cout << "Продолжительность в мин: " && cin >> firstI;
            cout << "Стоимость минуты в руб: " && cin >> secondD;
            cout << a.PhoneTalk(firstI, secondD) << endl;
            break;
        case 13:
            cout << "------13------" << endl;
            cout << "Целая часть числа: " && cin >> firstD;
            cout << "Дробная часть числа: " && cin >> secondD;
            cout << "Число: " && cin >> thirdD;
            cout << a.Multiply(firstD, secondD, thirdD) << endl;
            break;
        case 14:
            cout << "------14------" << endl;
            cout << "Положение указателя по X: " && cin >> firstI;
            cout << "Положение указателя по Y: " && cin >> secondI;

            if (firstI > 0 && firstI <= GetSystemMetrics(SM_CXSCREEN)
                && secondI > 0 && secondI <= GetSystemMetrics(SM_CYSCREEN))
                cout << "Положение указателя: " << firstI << " , " << secondI << endl;
            else {
                cout << "Неверное значение, превыщающее границы." << endl;
                return 0;
            }
            
            cout << "Изменить положение указателя по X на: " && cin >> firstI;
            a.ChangePointerX(firstI);
            cout << "Изменить положение указателя по Y на: " && cin >> secondI;
            a.ChangePointerY(secondI);
            break;
        case 15:
            cout << "------15------" << endl;
            cout << "Целая часть числа: " && cin >> firstI;
            cout << "Дробная часть числа: " && cin >> secondI;
            cout << "Число: " && cin >> thirdI;
            cout << a.Multiply2(firstI, secondI, thirdI) << endl;
            break;
        case 16:
            cout << "------16------" << endl;
            date1.InitializeByString();
            break;
        default:
            cout << "Такой задачи нет." << endl;
            return 0;
    }
}
