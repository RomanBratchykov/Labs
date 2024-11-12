#include "Header.h"
#include <iostream>
#include <cmath>
#include <ctime>	
#include <cstdlib>
 

int main() 
{
	int size;	
	
	std::cout << "Enter size of array\n";
	std::cin >> size;
	int* arr = new int[size];
	std::cout << "How you want to fill array? 1 - Random, 2 - Hand, 0 - Leave\n";
	int var;
	std::cin >> var;
	switch (var){
	case 1:fillArrRand(arr, size); break;
	case 2:fillArrHand(arr, size); break;
	case 0:
		delete[] arr;
		return 1;
	default: std::cout << "choose one of the above\n"; break;
	}
	std::cout << "Your array\n";
	showArr(arr, size);
	int end = arr[size - 1];
	int* arr2 = new int[size];
	for (int i = 0; i < size; i++) {
		arr2[i] = arr[i];
	}
	std::cout << "How you want sort your array? 1 - Ascending, 2 - Descending, 0 - Leave\n";
	std::cin >> var;
	switch (var) {
	case 1:sortArrAscending(arr, size); break;
	case 2:sortArrDescend(arr, size); break;
	case 0:
		delete[] arr;
		return 1;
	default: std::cout << "choose one of the above\n"; delete[] arr;  return 1;
	}
	std::cout << "Your sorted array\n";
	showArr(arr, size);
	if(WhichMore(arr, size) == 1) std::cout<<"There's more even elements in array\n";
	else std::cout << "There's more odd elements in array\n";
	std::cout << "Sum of array elements is " << findsumArr(arr, size) << "\n";
	int evenCount = 0, oddCount = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0 && arr[i] !=0) {
			evenCount++;
		}
		else if (arr[i] % 2 == 1 && arr[i] != 0) {
			oddCount++;
		}
	}
	int* arrOdd = new int[oddCount];
	int* arrEven = new int[evenCount];
	twoArrays(arr, arrEven, arrOdd, size);
	std::cout << "Even array\n";
	showArr(arrEven, evenCount);
	std::cout << "Odd array\n";
	showArr(arrOdd, oddCount);
	ChangeArrTwoNumsSum(arr, size);
	while (arr[size - 1] != end) {
		size--;
	}
	std::cout << "Array after changing two numbers with sum of them\n";
	showArr(arr, size);
	rewriteArr1(arr2, size);
	std::cout << "Array after rewriting\n";
	showArr(arr2, size);
	delete[] arr;
	delete[] arr2;
	delete[] arrOdd;
	delete[] arrEven;
	return 0;
}