# include <iostream>
using namespace std;

/*
公鸡:x, 母鸡:y, 小鸡:z

列出两个方程式：
		鸡：x + y + z = 100
		钱：15*x + 9*y + z = 300
*/

int main() {

	int x, y, z;

	for (x = 0; x < 20; x++) {

		y = 25 - (1.75 * x);
		z = 100 - y - x;

		if (z == (300 - (9 * y) - (15 * x)) && z % 3 == 0 && y > 0 && z > 0)
			cout << "cock=" << x << "," << "hen=" << y << "," << "chicken=" << z << endl;
	}
	return 0;
}