﻿#include <iostream>
#include <locale>
#include <math.h>
using namespace std;



int main()
{
	int various;

	setlocale(LC_ALL, "Rus");
	
	cout << "\nВыберите тип математической операции: \n1.Найти площадь и периметр прямоугольника\n2.Найти длинну окружности\n3.Найти среднее арифметическое\n4.Найти сумму, разность, произведение, частное квадратов двух чисел\n5.Найти сумму, разность, произведение, частное модулей двух чисел\n";
	cin >> various;

	switch (various)
	{
		case 1:
		{
			int a = 0, b = 0;
			cout << "\nДля того, чтобы рассчитать площадь и периметр прямоугольника, введите длинны его сторон:  ";
			cin >> a;
			cin >> b;
			
			cout << "\nВаш результат: \nПлощадь: " << a * b;
			cout << "\nПериметр: " << 2 * (a + b);

			break;
		}

		case 2:
		{
			float d = 0, pi = 3.14;
			cout << "\nДля того, чтобы найти длинну окружности, введите ее диаметр:  ";
			cin >> d;
			
			cout << "Ваш результат: " << pi * d;

			break;
		}

		case 3:
		{
			float a1 = 0, b1 = 0;
			cout << "\nДля того, чтобы найти среднее арифметическое двух чисел, введите их: ";
			cin >> a1;
			cin >> b1;
			
			cout << "Ваш результат: " << (a1 + b1) / 2;

			break;
		}

		case 4:
		{
			float a2 = 0, b2 = 0;
			cout << "\nДля того, чтобы найти сумму, разность, произведение, частное квадратов двух чисел, введите их в порядке убывания: ";
			cin >> a2;
			cin >> b2;
			
	
			cout << "\nВаши результы : ";
			cout << "\nСумма: " << a2 * a2 + b2 * b2;
			cout << "\nРазность: " << a2 * a2 - b2 * b2;
			cout << "\nПроизведение: " << a2 * a2 * b2 * b2;
			cout << "\nЧастное: " << (a2 * a2) / (b2 * b2);

			break;
		}


		case 5:
		{
			float a3 = 0, b3 = 0;
			cout << "\nДля того, чтобы найти сумму, разность, произведение, частное модулей двух чисел, введите их в порядке убывания: ";
			cin >> a3;
			cin >> b3;
			
			cout << "\nВаши результы : ";
			cout << "\nСумма: " << abs(a3) + abs(b3);
			cout << "\nРазность: " << abs(a3) - abs(b3);
			cout << "\nПроизведение: " << abs(a3) * abs(b3);
			cout << "\nЧастное: " << abs(a3) / abs(b3);

			break;
		}

		default:
			cout << "Вы ввели не цифру от 1 до 5. Ошибка.";
			break;

	}
	return 0;
	
}
