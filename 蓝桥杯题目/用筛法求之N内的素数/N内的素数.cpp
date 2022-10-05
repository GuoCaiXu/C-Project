# include <iostream>
using namespace std;

void isprims(int n) {

	int flag = 1;

	if (n < 2) 
		return;
	for (int i = 2; i < n; i++) {

		if (n % i == 0) 
			flag = 0;
	}

	if (flag == 1)
		cout << n << endl;
	return;
}

int main() {

	int n;

	cin >> n;

	for (int i = 2; i <= n; i++)
		isprims(i);

	return 0;
}