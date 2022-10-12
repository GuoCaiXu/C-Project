# include <iostream>
using namespace std;

//判断n是否为素数
int Judgement(int n) {

	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {

	int n, num = 0;

	cin >> n;
	if ( n > 6 && n < 32767 && n % 2 == 0) {

		for (int i = 2; i <= n / 2; i++) {  //为了避免重复用n/2 和n-i 完美解决重复问题
			if (Judgement(i) == 1 && Judgement(n - i) == 1) {

				num++;
			}
		}
		cout << num << endl;
	}

	return 0;
}