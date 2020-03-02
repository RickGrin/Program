#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;
void prim_vb(int a[], int n);
int main()
{
	setlocale(LC_ALL, "Russian");
	int* a;
	int i = 0, n, k = 0,p;  ifstream abc;
	cin >> p;
	abc.open("1.txt");//количество нечетных чисел
	while (!abc.eof())
	{
		abc >> n;
		if (n % 1 == 0)
		{
			k++;
		}
	}
	abc.close();
	a = new int[k]; // динамический массив
	abc.open("1.txt");
	while (i != 1)
	{
		abc >> n;//ввод из массива в файл новую переменную для проверки четности/нечетности
		if (n % 2 != 0)
		{ 
			a[i] = n; 
			i++; 
		}
	}
	abc.close();
	prim_vb(a, k);
	for (int z = 0; z < k; z++)
	{
		cout << "a["<<z<<"] = " << a[z] << endl;
	}

	return 0;
}


void prim_vb(int a[], int n)
{
	int sw = 0, min, i;
	for (int j = 0; j < n; j++)
	{
		min = j; i = j + 1;
		for (i; i < n; i++)
		{
			if (a[i] < a[min]) min = i;
		}
		sw = a[min];
		a[min] = a[j];
		a[j] = sw;
	}
}