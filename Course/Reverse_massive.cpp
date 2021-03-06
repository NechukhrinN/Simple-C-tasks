// ConsoleApplication12.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void swap(int * a, int * b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
void reverse(int * a, unsigned int size)
{
	int i = 0, j = size - 1;
	while (i < j)
	{
		swap(a[i], a[j]);
		++i;
		--j;
	}
} 
void rotate(int * a, unsigned int size, int shift)
{
	if (size < shift) shift = shift % size;
	reverse(a, shift);
	reverse(a+shift, size-shift);
	reverse(a, size);
		
}
void show(int * a, int size)
{
	for (int i = 0; i < size; ++i)
		cout << a[i] << " ";
	cout << endl;
}

int main()
{
	
	int m[] = { 1, 2, 3, 4, 5};
	int size = 5;
	int shift = 7;
	show(m, size);
	rotate(m, size, shift);
	show(m, size);
	system("pause");
    return 0;
}

