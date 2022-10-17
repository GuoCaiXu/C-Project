# include <iostream>
# include <string>
# include <stack>
using namespace std;

int main() {

	int n;
	while (cin >> n) {
		stack<int>s;
		string a[10005];

		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] == "P") {
				int b;
				cin >> b;
				s.push(b);
			}
			else if (a[i] == "O") {
				if (!s.empty()) {
					s.pop();
				}
			}
			else if (a[i] == "A") {
				if (!s.empty()) {
					cout << s.top() << endl;
				}
				else {
					cout << "E" << endl;
				}
			}
		}
		cout << endl;
		while (!s.empty()) s.pop();
	}

	return 0;
}