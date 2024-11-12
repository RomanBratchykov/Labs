#include "Header.h"
#include <iostream>
#include <ctime>
#include <cstdlib>


void fillArrRand(int arr[], int size)
{
    srand(static_cast<unsigned int>(time(0)));
    int st, in;
    std::cout << "Enter start and interval\n";
    std::cin >> st >> in;
    for (int i = 0; i < size; i++)arr[i] = rand() % in + st;
}
void fillArrHand(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << "Enter " << i + 1 << " element\n";
		std::cin >> arr[i];
	}
}
void showArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}
void sortArrAscending(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void sortArrDescend(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
bool WhichMore(int arr[], int size)
{
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] %2 == 0&& arr[i]!=0)sum1++;
		else if (arr[i] % 2 == 1 && arr[i] != 0) sum2++;
	}
	return sum1 > sum2;
}
int findsumArr(int arr[], int size)
{
	
	int sum = 0;
	for (int i = 0; i < size; i++) {
		int num = arr[i];  

		while (num >= 10) {
			if (num >= 1000) {
				sum += num / 1000;
				num %= 1000;
			}
			else if (num >= 100) {
				sum += num / 100;
				num %= 100;
			}
			else if (num >= 10) {
				sum += num / 10;
				num %= 10;
			}
		}
		sum += num; 
	}
	return sum;
}
void rewriteArr1(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int reversed = 0;
		while (arr[i] != 0) {
			int digit = arr[i] % 10;
			reversed = reversed * 10 + digit;
			arr[i] /= 10;
		}
		arr[i] = reversed;
	}
	
	
}
void twoArrays(int arr[], int arrEven[], int arrOdd[], int size)
{
	int evenindex = 0, oddindex = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0&&arr[i] != 0) {
			arrEven[evenindex++] = arr[i]; 
		}
		else if(arr[i] % 2 == 1 && arr[i] != 0) {
			arrOdd[oddindex++] = arr[i];
		}
		
	}
}
void ChangeArrTwoNumsSum(int arr[], int size)
{
	for (int i = 0; i < size; i++) {
		if (arr[i] == arr[i + 1]) {
			arr[i] += arr[i];
			for (int j = i + 1; j < size - 1; j++) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			i--;
		}
	}
}