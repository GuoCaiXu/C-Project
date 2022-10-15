# include <iostream>
# include <set>
# include <math.h>
using namespace std;

int main() {
	set<int>s;
	int arr[100], n, a;
	while (cin >> n) {
		while (n-- && cin >> a) {
			s.insert(a);
		}
		int z = 0;
		for (auto i : s) { arr[z] = i; z++; }

		for (int i = 0; i < s.size(); i++) {
			int max = i;
			for (int j = i; j < s.size(); j++) {
				if (fabs(arr[j]) > fabs(arr[max])) {
					int temp = arr[j];
					arr[j] = arr[max];
					arr[max] = temp;
				}
			}
		}
		for (int i = 0; i < s.size(); i++) cout << arr[i] << " ";

		cout << endl;
		s.clear();
	}

	return 0;
}