# include <iostream>
# include <algorithm>
# include <string>
using namespace std;

const int maxn = 10005;

string Judgement(int m) {
	if (m < 2) return "NO";

	for (int i = 2; i < m; i++) {
		if (m % i == 0) {
			return "NO";
		}
	}
	return "YES";
}

int main() {

	int n, k;
	int a[maxn];
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	int m = a[n - k] - a[k - 1];
	cout << Judgement(m) << endl << m;
}