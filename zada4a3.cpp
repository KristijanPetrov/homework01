#include <iostream>

using namespace std;

int main() {
	int n, count = 0;
	do{
		cout << "Molq vavedete estestveno 4islo: " << endl;
		cin >> n;
	}
	while (n < 1);
	while (n > 0) {
		n /= 10;
		count++;
	}
	cout << "Broq na cifrite e: " << count << endl;

	system("PAUSE");
	return 0;
}