#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n < 10 || n > 200) {
		cout << "Molq vavedete 4islo mejdu 10 i 200" << endl;
		cin >> n;
	}
	for (;n > 0;n--) {
		if (n % 7 == 0) {
			cout << n << " ";
		}
	}
	cout << endl;

	system("PAUSE");
	return 0;
}