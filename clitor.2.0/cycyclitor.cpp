#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    cout << "*Здравствуй, дорогой Сергей Пузырёв.\n Если хотите произвести действие, то введите: 1 \n Если хотите произвести перевод едениц, то введите: 2 \n\n Ваш выбор: ";
    int a, b, c, d;
    cin >> b;
    if (b == 1)
    {
        system("cls");
        cout << "Вы выбрали цифру №1. Прошу, выберите действие, которое хотите произвести:\n\n";
        cout << "1. Сложение\n";
        cout << "2. Вычитание\n";
        cout << "3. Умножение\n";
        cout << "4. Деление\n";
        cout << "5. Возведение в степень\n";
        cout << "6. Корень\n";
        cout << "7. Логарифм\n";
        cout << "8. Факториал\n";
        cout << "Введите номер: \n";
        cin >> b;

        if (b == 1)
        {
            system("cls");
            cout << "Введите первое число: \n";
            cin >> a;
            system("cls");
            cout << "Введите второе число: \n";
            cin >> c;
            system("cls");
            d = a + c;
            cout << "Ваш ответ: ";
            cout << d;
        }
        if (b == 2)
        {
            system("cls");
            cout << "Введите первое число: \n";
            cin >> a;
            system("cls");
            cout << "Введите второе число: \n";
            cin >> c;
            system("cls");
            d = a - c;
            cout << "Ваш ответ: ";
            cout << d;
        }
        if (b == 3)
        {
            system("cls");
            cout << "Введите первое число: \n";
            cin >> a;
            system("cls");
            cout << "Введите второе число: \n";
            cin >> c;
            system("cls");
            d = a * c;
            cout << "Ваш ответ: ";
            cout << d;
        }
        if (b == 4)
        {
            system("cls");
            cout << "Введите первое число: \n";
            cin >> a;
            system("cls");
            cout << "Введите второе число: \n";
            cin >> c;
            system("cls");
            d = a / c;
            cout << "Ваш ответ: ";
            cout << d;
        }
        if (b == 5)
        {
            system("cls");
            cout << "Введите число: \n";
            cin >> a;
            system("cls");
            cout << "Введите степень числа: \n";
            cin >> c;
            system("cls");
            d = pow(a, c);
            cout << "Ваш ответ: ";
            cout << d;
        }
    }
    if (b == 2)
    {
        system("cls");
        cout << "1. Единицы измерения длины\n";
        cout << "2. Еденицы измерения массы\n\n";
        cout << "Введите номер: \n";
        cin >> b;
        if (b == 1)
        {
            system("cls");
            cout << "Расчет длины\n";
        }
        if (b == 2)
        {
            system("cls");
            cout << "Расчет массы\n";
        }
    }
}