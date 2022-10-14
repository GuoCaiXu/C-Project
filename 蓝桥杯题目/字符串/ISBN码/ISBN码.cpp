# include <iostream>
# include <string>
using namespace std;

int main() {

	string a;
	while (cin >> a) {
		int j = 1;
		int num = 0;
		for (int i = 0; i < a.size() - 1; i++) {
			if (a[i] != '-') {
				num = num + ((a[i] - 48) * j);
				j++;
			}
		}
		num %= 11;
		if (num >= 10) {
			num = 88;
			if ((a[12]) == num) {
				a = "Right";
				cout << a << endl;
			}
			else {
				a[12] = num;
				cout << a << endl;
			}
		}
		else {
			if ((a[12] - 48) == num) {
				a = "Right";
				cout << a << endl;
			}
			else {
				a[12] = num + 48;
				cout << a << endl;
			}
		}
	}
	return 0;
}