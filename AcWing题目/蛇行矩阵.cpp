# include <iostream>
using namespace std;

int main() {

	int a1[100][100], n;

	int j;

	while (cin >> n) {

		int num = n;
		int sum1 = 2, sum2 = 1;

		a1[0][0] = 1;
		for (int i = 0; i < n;) {

			for (j = 0; j < num; j++) {

				cout << a1[i][j] << " ";
				a1[i][j + 1] = a1[i][j] + sum1;
				sum1++;
			}
			cout << endl;
			j = 0;
			i++;
			num--;
			a1[i][j] = a1[i - 1][j] + sum2;
			sum2++;
		}

	}

	return 0;
}