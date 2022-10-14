# include <iostream>
using namespace std;

int main() {

	string a, b;
	int cnt = 0;

	cin >> a >> b;

	if (a.size() < b.size()) {
		for (int i = 0; i < b.size(); i++) {
			a[i] = b[i]; cnt++;

		}
	}
	
	for (int i = 0; i < a.size(); i++) {
		if (a[i] != b[i] && a[i + 1] == b[i + 1]) {
			a[i] = b[i];
			cnt++;
		}
		else if (a[i] != b[i] && a[i + 1] != b[i + 1]) {
			a.erase(i, 1);
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}