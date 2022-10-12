# include <iostream>
using namespace std;

int Judgement(int n) {

	for (int i = 2; i < n; i++) if (n % i == 0) return 0;
	return n;
}
int main() {
	int num = 0;
	for (int i = 100; i <= 200; i++) {

		if (Judgement(i) != 0) num++;
	}
	cout << num << endl;

	for (int i = 100; i <= 200; i++) if (Judgement(i) != 0) cout << Judgement(i) << " ";
	cout << endl;
	return 0;
}