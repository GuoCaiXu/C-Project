# include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	while (n--) {
		int a[9], b[9];
		for (int i = 0; i < 9; i++) {
			cin >> a[i];
		}
		int j = 8, z = 0;  //j 为大于a[0]的数 z为小于a[0]
		for (int i = 8; i > 0; i--) {
			if (a[i] < a[0]) {
				b[z] = a[i];
				z++;
			}
			else if (a[i] > a[0]) {
				b[j] = a[i];
				j--;
			}
		}
		b[j] = a[0];
		for (int i = 0; i < 9; i++) {
			cout << b[i] << " ";
		}
		cout << endl;
	}

	return 0;
}