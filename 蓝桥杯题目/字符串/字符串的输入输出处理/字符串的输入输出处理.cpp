# include <iostream>
# include <string>
using namespace std;

int main() {

	int n;
	string a[1000];

	cin >> n;

	for (int i = 0; i < 4; i++) {

		getline(cin, a[i]);
	}

	int pos = 0;

	
	while (1) {
		int num = a[n + 1].find(" ", pos);

		if (a[n + 1].find(" ", pos) == -1) {

			cout << a[n + 1].substr(pos, a[n + 1].size());
			return 0;
		}
		else {

			cout << a[n + 1].substr(pos, num - pos) << endl;
			pos = num + 1;
		}
	}
	return 0;
}