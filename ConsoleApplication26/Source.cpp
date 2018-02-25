#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int N;
	do
	{
		cout << "Ввести номер задания: " << endl;
		cin >> N;
		switch (N)
		{
		case 1:
		{
			int a[10][10], sum[10] = { 0 };
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					a[i][j] = 1 + rand() % 60;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					sum[i] += a[i][j];
				}
			}
			for (int i = 0; i < 10; i++)
			{
				cout <<"Сумма элементов в каждой строке : "<<i+1<<" - "<< sum[i]<< endl;
			}
		}
		break;
		case 2:
		{
			int a[4][4] = { {0}, {0} }, min = 0, count = 0, d[4] = { 0 };
			for (int i = 0; i <4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					a[i][j] =5 + rand() % 80;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			for (int i = 0; i < 4; i++)
			{
				count = 0;
				for (int j = 0; j < 4; j++)
				{
					for (int k = 0; k < 4; k++)
					{
						if (a[i][j] == a[i][k])
						{
							count++;
						}
					}
				}
				d[i] = count - 4;
			}
			min = d[0];
			for (short int i = 0; i < 4; i++)
			{
				cout << " d[ " << i<< " ]= " << d[i] << endl;
				if (d[i] < min)
				{
					count = i;
					min = d[i];
				}
			}
			cout << " Минимальный элемент " << min << " расположен в строке " << count << endl;
		}
		break;
		case 3:
		{
			int a[7][7], temp = 0;
			int b[7] = { 0 }, k = 0;
			cout << "Двухмерный массив:" << endl;
			for (int i = 0; i < 7; i++)
			{
				for (int j = 0; j < 7; j++)
				{
					a[i][j] = 1 + rand() % 60;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			cout << "Одномерный массив b из номеров строк этого массива: " << endl;
			for (int i = 0; i < 7; i++)
			{
				for (int j = 0; j < 7; j++)
				{
						b[i] = a[i][j];
			        cout << b[i] << "\t";
				}
			}
						cout << endl;
			
		}
		break;

		default:
			break;
		}
	} while (N>0);




















}