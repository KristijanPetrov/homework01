#include <iostream>

using namespace std;

int main() {
	int number, count = 0, sum = 0;
	double srednoAritmeti4no = 0;
	do {
		cin >> number;
		if (number >= 1 && number <= 200) {
			count++;
			sum += number;
			srednoAritmeti4no = sum / double(count);
		}
	} while (number >= 1);
	cout << "Broi: " << count << " Suma: " << sum << " Sredno ariteti4no: " << srednoAritmeti4no << endl;

	system("PAUSE");
	return 0;
}