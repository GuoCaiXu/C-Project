# include <iostream>
# include <algorithm>
# include <math.h>
using namespace std;

bool cmp(int a, int b) {
	return fabs(a) > fabs(b);
}

int main() {
	
	int n;
	while (cin >> n && n != 0) {
		int a[100];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n, cmp);
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}