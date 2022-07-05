#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	//Создание массива и вывод исходного массива.
	int const length = 20;
	int arr_begg[length];

	cout << "Original array: ";
	for (int i = 0; i < length; i++) {
		int random = -65 + rand() % 101;
		arr_begg[i] = random;
		cout << random << " ";
	}

	cout << "\n\n";


	// Сортировка массива.

	int n = sizeof(arr_begg) / sizeof(arr_begg[0]);
	sort(arr_begg, arr_begg + n, greater<int>());


	//Вывод сортированного массива.

	cout << "Sorted array: ";
	for (int i = 0; i < length; i++)
		cout << arr_begg[i] << " ";

	cout << "\n\n";

	//Нахождение кол-ва одинаковых элиментов.

	int counter = 0;
	for (int i = 1; i < length - 1; i++)
		if (arr_begg[i - 1] == arr_begg[i])
			counter++;
	
	cout << "Counter indentical elements: " << counter << endl;

	return 0;
}
