# include <iostream>
using namespace std;

int main() {

	int n1, n2;

	while (cin >> n1 >> n2) {

		int max = 0, sum = 0;

		if (n1 > 0 && n1 < 1000000 && n2 > 0 && n2 < 100000) {

			cout << n1 << " " << n2 << " ";

			if (n1 > n2) { int temp = n1; n1 = n2; n2 = temp; }

			for (int i = n1; i <= n2; i++) {

				int j = i;
				sum = 1;

				while (j != 1) {

					if (j % 2 == 0) { j = j / 2; sum++; }
					else if (j % 2 != 0) { j = j * 3 + 1; sum++; }
				}

				if (sum > max) max = sum;
			}
			cout << max << endl;
		}
	}

	return 0;
}