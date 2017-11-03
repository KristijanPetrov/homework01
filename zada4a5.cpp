#include <iostream>

using namespace std;

int main(){
	int num;
	for (int n = 1;n < 10; n++) {
		for (int m = 0;m < 10;m++) {
			for (int l = 0;l < 10;l++) {
				if (n != m && m != l && n != l) {
					num = 100 * n + 10 * m + l;
					cout << num << " " ;
				}
			}
			cout << endl;
		}
		cout << endl;
	}


	system("PAUSE");
	return 0;
}