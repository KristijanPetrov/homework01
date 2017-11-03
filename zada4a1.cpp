#include <iostream>

using namespace std;

int main()
{
	int number, sum = 0, i = 10;
	cin >> number;
	if (number < 0) {
		cout << "Molq vavedete neotricatelna stoinost" << endl;
	}
	else if (number > 5545) {
		cout << "Molq vavedete stoinost po malka ot 5546" << endl;
	}
	else {
		for (int x = 1;x <= number;x++) {
			sum += i;
			i++;
		}
		cout << sum << endl;
	}
	system("PAUSE");
	return 0;
}
