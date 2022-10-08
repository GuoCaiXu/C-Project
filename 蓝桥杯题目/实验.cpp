# include <iostream>
# include <vector>
using namespace std;

int main() {

	int arr[5][5];

	arr[1][0] = 1;

	for (int i = 0; i < 25; i++) {

		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}