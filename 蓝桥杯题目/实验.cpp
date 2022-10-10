# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int Judgement(int n, vector<int>&v) {

	int flag = 1;

	if (n < 2) return 0;

	for (int i = 2; i < n; i++) {

		if (n % i == 0) { 
			flag = 0;
		}
	}

	if (flag == 1) {

		v.push_back(n);
		return n;
	}
}

int main() {

	vector<int>v1;

	int n, num = 0;

	cin >> n;

	if (n > 6 && n < 32767 && n % 2 == 0) {

		for (int i = 2; i < n; i++) {

			Judgement(i, v1);
		}
		for (int i = 0; i < v1.size(); i++) {
			for (int j = i; j < v1.size(); j++) {

				if (v1[i] + v1[j] == n) {
					num++;
					break;
				}
			}
		}
		cout << num << endl;
	}
	return 0;
}