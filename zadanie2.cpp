#include "zadanie2.h"
#include <algorithm>

using namespace std;

void randomArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 200 - 100;
	}
}

void (*funct(int* arr, int size))(int* arr, int size)
{
	int m = 0;

	for (int i = 0; i < size; i++) {
		m = m + arr[i];
	}

	if (m == arr[0]) {
		return reverse;
	}

	else if (m > arr[0]) {
		return ndecrease;
	}

	else if (m < arr[0]) {
		return decrease;
	}

}

void reverse(int* arr, int size)
{
	for (int i = 0; i < (size / 2); i++) {
			int temp = arr[i];
			arr[i] = arr[size - 1 - i];
			arr[size - 1 - i] = temp;
	}
}

void ndecrease(int* arr, int size)
{
	int temp = 0;
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] >= arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void decrease(int* arr, int size)
{
	int temp = 0;
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] <= arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void print(int* arr, int size)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
	cout << '\n';
}
