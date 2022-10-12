# include <iostream>
using namespace std;

int main() {

	int n;

	cin >> n;

	if (n % 2 == 1) { cout << -1; return 0; }

	int a[26];

	a[0] = 1;
	for (int i = 1; i < 26; i++){
		a[i] = a[i - 1] * 2;
	}
	for (int i = 25; i >= 0; i--) {
		
		if (n >= a[i]) {
			cout << a[i] << " ";
			n -= a[i];

			if (n == 0) {
				break;
			}
		}
	}
	return 0;
}