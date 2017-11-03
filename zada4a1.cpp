#include <iostream>

using namespace std;

int main()
{
	int number, sum = 0, i = 10;
	cin >> number;
	while (number < 0 || number > 5545) {
		cout << "Molq vavedete neotricatelna stoinost po malka ot 5546" << endl;
		cin >> number;
	}
	for (int x = 1;x <= number;x++) {
		sum += i;
		i++;
	}
	cout << sum << endl;

	system("PAUSE");
	return 0;
}
