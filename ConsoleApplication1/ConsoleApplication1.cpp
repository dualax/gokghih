// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "ConsoleApplication1.h"

using namespace std;

int main()
{
    // Задание на циклы - 1;

    setlocale(LC_ALL, "RUS");

    /*int user_number, sum = 0;

    cout << "Введите целое число" << endl;
    cin >> user_number;

    for (int i = 0; i < user_number; i++) sum += i;

    cout << "Сумма всех чисел = " << sum << endl;*/

    // Задание на циклы - 2

    /*int user_number;
    int factorial_user_number = 1;
    int i = 1;

    cout << "Введите целое число" << endl;
    cin >> user_number;

    while (i <= user_number)
    {
        i++;
        factorial_user_number *= i;
    }
    
    cout << "Факториал числа = " << factorial_user_number << endl;*/

    // Задание на циклы - 3

    /*int user_number;
    
    cout << "Введите число" << endl;
    cin >> user_number;

    cout << "Четное число" << user_number << endl;
    for (int i = 2; i < user_number; i += 2)
    {
        cout << i << "\t";
    }

    cout << "Нечетные числа" << user_number << endl;
    for (int i = 1; i < user_number; i += 2)
    {
        cout << i << "\t";
    }*/
     
    // Задание на циклы - 4

    /*int user_number;

    cout << "Введите число" << endl;
    cin >> user_number;

    for (int i = user_number; i >= 1; i--)
    {
        cout << i << "\t";
    }*/

    //Задание на циклы - 5
     
    /*int user_number;

    cout << "Введите число " << endl;
    cin >> user_number;

    for (int i = 1; i <= 10; i++)
    {
        int a = user_number * i;
        cout << user_number << " * " << i << " = " << a << endl;
    }*/

    // Задание на циклы - 6

    /*int user_number;

    cout << "Введите число ";
    cin >> user_number;

    int fib1 = 0;
    int fib2 = 1;
    int fibх;

    for (int i = 3; i <= user_number; ++i) 
    {
        fibх = fib1 + fib2;
        fib1 = fib2;
        fib2 = fibх;
    }

    cout << user_number << " число Фибоначчи: " << fib2 << endl;*/

    // Задание на циклы - 7

    /*int user_number, sum = 0;

    cout << "Введите число ";
    cin >> user_number;

    while (user_number > 0)
    {
        sum = sum + (user_number % 10);
        user_number = user_number / 10;
    }

    cout << "Сумма всех чисел = " << sum << endl;*/

    // Задание на циклы - 8
   
    // Задание на циклы - 9

    /*int user_number;

    cout << "Введите число ";
    cin >> user_number;

    //проверяет является личисло простым
    bool isPrime = true;

    if (user_number <= 1) 
    {
      isPrime = false;
    }
    else
    {
      for (int i = 2; i * i <= user_number; ++i)
      {
      if (user_number % i == 0) 
        {
          isPrime = false;
          break;
        }
      }
    }
    if (isPrime) 
    {
        cout << "Число простое" << endl;
    }
    else
    {
        cout << "Число не простое" << endl;
    }*/


    // Задание по логическим операторам и условиям - 1

    /*int user_number;

    cout << "Введите число ";
    cin >> user_number;

    //проверка на четность и нечетностьь
    if (user_number % 2 == 0) 
    {
        cout << user_number << " - четное число" << endl;
    }
    else 
    {
        cout << user_number << " - нечетное число" << endl;
    }*/

    // Задание по логическим операторам и условиям - 2

   /* int user_number;

    cout << "Введите число ";
    cin >> user_number;

    if (user_number > 0)
    {
        cout << "Положительное число";
    }
    else if (user_number < 0)
    {
        cout << "Отрицательное число";
    }
    else
    {
        cout << "Нолик";
    }*/

    // Задание по логическим операторам и условиям - 3

    /*int user_number;

    cout << "Введите число ";
    cin >> user_number;

    // Тернарный оператор для проверки условия
    string result = (user_number > 10) ? "больше 10" : "10 и меньше";

    cout << result << endl;*/

    // Задание по логическим операторам и условиям - 4

    /*int user_number;

    cout << "Введите число ";
    cin >> user_number;

    string result = (user_number % 5 == 0) ? "число кратно пяти" : "число не кратно пяти";

    cout << result << endl;*/

    //Задание по логическим операторам и условиям - 5

    /*int user_year;

    cout << "Введите год ";
    cin >> user_year;

    // если число делится на 4, но не делеится на 100, или на 400 без остатка то это високосный год
    if ((user_year % 4 == 0 && user_year % 100 != 0) || user_year % 400 == 0)
    {
        cout << user_year << " является високосным годом" << endl;
    }
    else 
    {
        cout << user_year << " является не високосным годом" << endl;
    }*/

    //Задание по логическим операторам и условиям - 6

    /*int user_number;
    int nachalo = 1;
    int konec = 100;

    cout << "Введите число ";
    cin >> user_number;

    if (user_number >= nachalo && user_number <= konec)
    {
        cout << "Число находится в рамках диапозона" << endl;
    }
    else
    {
        cout << "Число не находится в рамках диапозона" << endl;
    }*/

    //Задание по логическим операторам и условиям - 7

    /*int user_day;

    cout << "Введите число дня недели (от 1 до 7): ";
    cin >> user_day;

    switch (user_day) {
    case 1:
        cout << "Понедельник" << endl;
        break;
    case 2:
        cout << "Вторник" << endl;
        break;
    case 3:
        cout << "Среда" << endl;
        break;
    case 4:
        cout << "Четверг" << endl;
        break;
    case 5:
        cout << "Пятница" << endl;
        break;
    case 6:
        cout << "Суббота" << endl;
        break;
    case 7:
        cout << "Воскресенье" << endl;
        break;
    }*/
    //Задание по логическим операторам и условиям - 8

    /*int user_month;

    cout << "Введите число месяца: ";
    cin >> user_month;

    switch (user_month) {
    case 1:
        cout << "Январь" << endl;
        break;
    case 2:
        cout << "Февраль" << endl;
        break;
    case 3:
        cout << "Март" << endl;
        break;
    case 4:
        cout << "Апрель" << endl;
        break;
    case 5:
        cout << "Май" << endl;
        break;
    case 6:
        cout << "Июль" << endl;
        break;
    case 7:
        cout << "Июнь" << endl;
        break;
    case 8:
        cout << "Август" << endl;
        break;
    case 9:
        cout << "Сентябрь" << endl;
        break;
    case 10:
        cout << "Октябрь" << endl;
        break;
    case 11:
        cout << "Ноябрь" << endl;
        break;
    case 12:
        cout << "Декабрь" << endl;
        break;
    }*/

    //Задание по логическим операторам и условиям - 9

    /*int user_number;

    cout << "Введите число ";
    cin >> user_number;

    if (user_number % 2 == 0 && user_number > 0)
    {
        cout << "Число четное и положительное" << endl;
    }
    else
    {
        cout << "Число не является четным или положительным" << endl;
    }*/


    //Задание по логическим операторам и условиям - 10

    /*int user_number;

    cout << "Введите число ";
    cin >> user_number;

    if (user_number % 2 == 1 && user_number < 0)
    {
        cout << "Число нечетное и отрицательным" << endl;
    }
    else
    {
        cout << "Число не является четным или положительным" << endl;
    }*/

    // Задание на комбинирование операторов - 1

    /*int user_number;

    cout << "Введите число ";
    cin >> user_number;

    if (user_number >= 10 && user_number <= 20 && user_number % 2 == 0)
    {
        cout << "Число в диапазоне и является четным." << endl;
    }
    else 
    {
        cout << "Число не удовлетворяет условиям." << endl;
    }*/

    // Задание на комбинирование операторов - 2

    /*int user_number;

    cout << "Введите число ";
    cin >> user_number;

    string result = (user_number > 0 && user_number % 2 == 0) ? "Число положительное и четное" : "Число не является одновременно положительным и четным";

    cout << result << endl;*/

    // Задание на комбинирование операторов - 3

    /*int user_ocenka;

    cout << "Введите оценку A, B, C, D, F, а я вам скажу что она знаачит ";
    cin >> user_ocenka;

    switch (user_ocenka)
    {
    case 'A':
        cout << "Отлично!" << endl;
        break;
    case 'B':
        cout << "Хорошо!" << endl;
        break;
    case 'C':
        cout << "Удовлетворительно" << endl;
        break;
    case 'D':
        cout << "Неудовлетворительно" << endl;
        break;
    case 'F':
        cout << "Плохо" << endl;
        break;
    }*/

    // Задание на комбинирование операторов - 4

    /*int user_number;

    cout << "Введите число ";
    cin >> user_number;

    if (user_number > 0 && user_number % 3 == 0) 
    {
        cout << "Число положительное и делится на 3." << endl;
    }
    else 
    {
        cout << "Число не является положительным И не делится на 3." << endl;
    }*/

    // Задание на комбинирование операторов - 5

    /*int user_number;

    cout << "Введите число";
    cin >> user_number;

    if (user_number >= 1 && user_number <= 100 && user_number % 2 != 0) 
    {
        cout << "Число находится в диапазоне от 1 до 100 и не является четным." << endl;
    }
    else 
    {
        cout << "Число не удовлетворяет условиям." << endl;
    }*/

    // Дополнительное задание - 1
    

    // Дополнительное задание - 2

    /*int user_number;
   int user_number1,
   int user_number2;

    cout << "Калькулятор" << endl;
    cout << "Выберите операцию:" << endl;
    cin >> user_number;

    cout << "Введите первое число: ";
    cin >> user_number1;

    cout << "Введите второе число: ";
    cin >> user_number2;

    switch (user_number) {
    case '+':
        cout << user_number1 << " + " << user_number2 << " = " << user_number1 + user_number2 << endl;
        break;
    case '-':
        cout << user_number1 << " - " << user_number2 << " = " << user_number1 - user_number2 << endl;
        break;
    case '*':
        cout << user_number1 << " * " << user_number2 << " = " << user_number1 * user_number2 << endl;
        break;
    case '/':
        cout << user_number1 << " / " << user_number2 << " = " << user_number1 / user_number2 << endl;
        break;   
    }*/

    // Дополнительное задание - 3

    /*int user_age;

    cout << "Введите свой возраст: ";
    cin >> user_age;

    if (user_age < 13) 
    {
        cout << "Вы ребенок." << endl;
    }
    else if (user_age < 19)
    {
        cout << "Вы подросток." << endl;
    }
    else if (user_age < 55) 
    {
        cout << "Вы взрослый." << endl;
    }
    else
    {
        cout << "Вы пожилой человек." << endl;
    }*/

    // Дополнительное задание - 4

    // Дополнительное задание - 5

    /*int user_number1,
    int user_number2,
    int user_number3;

    cout << "Введите длину 1 стороны: ";
    cin >> user_number1;

    cout << "Введите длину 2 стороны: ";
    cin >> user_number2;

    cout << "Введите длину 3 стороны: ";
    cin >> user_number3;

    bool is_triangle = (user_number1 + user_number2 > user_number3) && (user_number1 + user_number3 > user_number2) && (user_number2 + user_number3 > user_number1);

    if (is_triangle) 
    {
        cout << "Треугольник с такими сторонами существует." << endl;
    }
    else 
    {
        cout << "Треугольник с такими сторонами не существует." << endl;
    }*/


}

