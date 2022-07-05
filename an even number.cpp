#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int number;
	cout << "Enter number: ";
	cin >> number;

	if (number % 2 == 0)
		cout << "Number " << number << " - Even" << endl;//Число number Чётное

	else
		cout << "Number " << number << " - Odd" << endl; //Число number Нечётное


	return 0;
}
