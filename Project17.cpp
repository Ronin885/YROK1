

#include <iostream>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{// задание 1
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	/*int sum[6];
	int Vsum = 0;

	cout << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << "Ввести прибыль фирмы за месяц : " << endl;
		cin >> sum[i];
		Vsum += sum[i];

	}
	cout << Vsum;*/
	// задание 2
	/*int a[5]{1, 2, 3, 4, 5};

	for (int = 4 ;i  i >= 0; i--)
	{
		cout << a[i]  << endl;
	}*/
	// задание 3
	/*int x[5];
	int dl = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << "ВВЕСТИ ДЛИНУ : ";
		cin >> x[i];
		cout << endl;
		dl += x[i];
		
	}
	cout << dl << endl;*/
	// задание 4
	/*int sum[12];
	int max, min;
	
	for (int i = 0; i < 12; i++)
	{
		cout << "ВВЕСТИ ПРИБЫЛЬ ЗА МЕСЯЦ : ";
		cin >> sum[i];
		cout << endl;
		
		cout << sum[i] << endl;

	}*/
	/*int a;
	a = rand() % (200 - 100 ) + 100;
		cout << a;*/
	// задание 5
	/*int a[10];
	int b[10];
	int c = 0;
	
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 5;
		cout << a[i] << endl;
		b[i] = -1;
	}

	for (int i = 0; i < 10; i++)
	{
		
		if (a[i] != 0)
		{
			b[c] = a[i];
			c++;
			
		}

	}
	for (int i = 0; i < 10; i++)
	{
		cout << "   " << b[i] << endl;

	}*/
}
