#include <iostream>
#include "zadanie2.h"

int main()
{
	const int size = 10;
	int arr[size] = { 4, -40, 1, 7, 3, 2, 8, 9, -40, 6 };

	void(*func)(int* arr, int size);
	randomArr(arr, size);
	func = funct(arr, size);
	print(arr, size);
	func(arr, size);
	print(arr, size);
}															