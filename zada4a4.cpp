#include <iostream>

using namespace std;

int main() {
	int n, i = 1;
	cin >> n;
	while (n < 1) {
		cout << "Molq vavedete polojitelno 4islo: " << endl;
		cin >> n;
	}
	for (;i <= n;i++) {
		if (n % i == 0) {
			cout << i << " ";
		}	
	}
	cout << endl;

	system("PAUSE");
	return 0;
}