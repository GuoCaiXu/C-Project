# include <iostream>
# include <algorithm>
# include <stdio.h>
# define P 3.141592654
using namespace std;

int main() {

	double w, h, r, v1, v2;

	while ((cin >> w >> h) && w && h && w < 101 && h < 101) {
		r = min(h / (2*P + 2), w / 2);
		v1 = P * r * r * w;
		r = w / (2 * P);
		v2 = P * r * r * (h - 2*r);
		printf("%.3f", max(v1, v2));
	}

	return 0;
}