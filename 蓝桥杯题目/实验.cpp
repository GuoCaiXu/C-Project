# include <iostream>
# include <vector>
using namespace std;

int main() {

	int N, count = 1;

	cin >> N;

	vector<vector<int>>matrix(N, vector<int>(N, 0));

	/*for (int i = 0; i < N; i++) {

		for (int j = i; j >= 0; --j) {
			matrix[j][i - j] = count++;
		}
		cout << endl;
	}*/

	matrix[1][0] = 1;

	for (auto i : matrix) {

		for (auto j : i) {

				cout << j << " ";
		}

		cout << endl;
	}

	return 0;
}