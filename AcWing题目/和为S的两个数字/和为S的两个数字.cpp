# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int main() {

	vector<int>v;
	int sum = 7;

	for (int i = 1; i < 5; i++) {

		v.push_back(i);
	}

	for (auto i : v) {

		if (count(v.begin(), v.end(), sum - i)) {
			cout << i << " " << sum - i << endl;
			break;
		}
	}

	return 0;
}