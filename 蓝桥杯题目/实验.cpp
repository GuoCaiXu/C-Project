# include <iostream>
using namespace std;

int main() {

	int a[10];

	int j = 0, z = 9; 
	for (int i = 0; i < 5; i++) {
		a[i] = j;
		j++;
	}
	for (int i = 9; i > 5; i--) {
		a[i] = z;
		z--;
	}
	a[j] = 5;
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}