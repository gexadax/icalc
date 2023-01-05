#include <iostream>
using namespace std;

int main()
{
	int a, b;

	a = 0;
	b = 0;

	char oper;
	

	while (true) 
	{	
		setlocale(LC_ALL, "RU");
		
		cout << "Какую операцию выполнить (+ - * / ! ^)? : ";
		cin >> oper;
		cout << "Введите число 1: ";
		cin >> a;
		
		

		switch (oper)
		{
		case '+':
			cout << "Введите число 2: ";
			cin >> b;
			cout << endl << a + b << endl;
			
			break;

		case '-':
			cout << "Введите число 2: ";
			cin >> b;
			cout << endl << a - b << endl;
			break;

		case '*':
			cout << "Введите число 2: ";
			cin >> b;
			cout << endl << a * b << endl;
			break;

		case '/':
			cout << "Введите число 2: ";
			cin >> b;
			if (b == 0)
			{
				cout << "На 0 делить нельзя" << endl;
			}
			
			cout << ((float)a / (float)b) << endl;
			break;

		case '!':
				{
				int i = 1;
				int factorial =1;
					while (i <= a) {
						factorial *= i;
							i++;
				}
					
				cout << "Факториал равен: " << factorial << endl;
					
		}
			break;

		case '^':
			cout << "Введите число 2: ";
			cin >> b;
			cout << endl << (a ^ b) << endl;
			
			break;

		default:
			return 0;

		}
	}


}