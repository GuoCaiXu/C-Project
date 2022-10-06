# include <iostream>
using namespace std;

int main() {

	int n, num, a = 1;
	int num1 = 2, num2 = 1, sum = 1, temp = 2;

	while (cin >> n) {

		num = n;

		for (int i = 0; i < n;) {

			for (int j = 0; j < num; j++) {

				cout << a << " ";
				a += num1;
				num1 += num2;

			}
			i++;
			num--;
			cout << endl;
			sum += i;
			a = sum;
			temp++;
			num1 = temp;
		}
	}

	return 0;
}