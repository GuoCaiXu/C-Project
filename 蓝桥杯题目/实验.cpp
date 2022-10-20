# include <iostream>
# define e 2.718281828459
using namespace std;


int main() {

	int x;
	double result;
	cin >> x;
	if (x <= 1) {
		result = pow(e, x);
	}
	else if (x > 1) {
		result = pow(x, 2) - 1;
	}
	printf("f(%.1lf) = %.1lf", x, result);

	return 0;
}