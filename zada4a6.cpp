#include <iostream>

using namespace std;

int main()
{
	int n, sum = 0;
	cin >> n;
	while (n < 10 || n > 99) {
		cout << "Molq vavedete dvucifreno 4islo" << endl;
		cin >> n;
	}
	for (int m, k;n > 9;n--) {
		m = (n % 10);
		sum += m;
		k = ((n / 10) % 10);
		sum += k;
	}
	cout << sum << endl;

	system("PAUSE");
	return 0;
}