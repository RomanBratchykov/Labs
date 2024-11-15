#include <iostream>
#include <ctime>
namespace ns1 {
	inline int i = 0;
	inline int n;
	void v(double arr[], int n) {

		for (i = 0; i < n; i++) {
			arr[i] = (rand() % 201 + -100) / 10.0;
		}
	} // enter array with random values
	double min(double arr[], int n) {
		double min = arr[0];
		for (i = 0; i < n; i++)
			if (arr[i] < min)
				min = arr[i];
		return min;
	}
	void del(double arr[], int n, int index) {
		if (index >= n || index < 0) std::cout << "no such index\n";
		else {
			for (i = index-1; i < n; i++) {
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
			n--;
			i--;
		}

	} //delete element with chosen index
}
namespace ns2 {
	int i = 0;
	double sum;
	void v(double arr[], int n) {
		for (int i = 0; i < n; i++)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << "\n";
	} // show array
	double max(double arr[], int n) {
		double max = arr[0];
		for (i = 0; i < n; i++)
			if (arr[i] > max)
				max = arr[i];
		return max;
	}
	void del(double arr[], int n, double value) {
		for (int i = 0; i < n; i++) {
			if (arr[i] == value) {
				for (int j = i; j < n - 1; j++) {
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
				n--;
				i--;
			}
		}
	} //delete elements with chosen value
}

int main() {
	srand(time(0));
	std::cout << "enter size of array(should be multiple of 3)\n";
	std::cin >> ns1::n;
	if (ns1::n % 3 == 0) {
		double arr[ns1::n], arr1[ns1::n / 3];
		ns1::v(arr, ns1::n);
        ns2::v(arr, ns1::n);
		for (int i = 0, group = 0; i < ns1::n; i += 3, group++) {
			ns2::sum = arr[i] + arr[i + 1] + arr[i + 2];
			arr1[group] = ns2::sum;
		}
		std::cout << "Your max of sums of each 3 numbers is " << ns2::max(arr1, ns1::n / 3) << "\n";
		for (ns1::i = 0; ns1::i < ns1::n; ns1::i++) {
			for (ns2::i = 0; ns2::i < ns1::n - 1; ns2::i++) {
				if (arr[ns2::i] > arr[ns2::i + 1]) {
					double temp = arr[ns2::i];
					arr[ns2::i] = arr[ns2::i + 1];
					arr[ns2::i + 1] = temp;

				}
			}
		}
		ns2::v(arr, ns1::n);
		int end = arr[ns1::n - 1];
		while (true) {
			std::cout << "Enter what you want to delete 1 - element with index 2 - element with value 0 - exit\n";
			int choice;
			std::cin >> choice;
				if (choice == 0) break;
			switch (choice) {
			case 1:
				std::cout << "enter index of element you want to delete\n";
				int index;
				std::cin >> index;
				ns1::del(arr, ns1::n, index);
				ns2::v(arr, ns1::n-1);
				break;
			case 2:
				std::cout << "enter value of element you want to delete\n";
				double value;
				std::cin >> value;
				ns2::del(arr, ns1::n, value);
				ns2::v(arr, ns1::n-1);
				break;
			default: std::cout << "choose 1, 2 or 0\n";

			}
		}
				
	}
	else std::cout << "Size of array should be multiple of 3\n";
	return 0;
}