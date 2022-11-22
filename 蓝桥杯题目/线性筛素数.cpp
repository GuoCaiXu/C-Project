# include <iostream>
# include <cstdio>

using namespace std;

const int N = 100000010;

int value[N];
bool st[N];
int cnt;

void f(int n) {

	for (int i = 2; i <= n; i++) {
		if (!st[i]) value[++ cnt] = i;

		for (int j = 1; i * value[j] <= n; j++) {
			st[i * value[j]] = true;

			if (i % value[j] == 0) break;
		}
	}
}

int main() {

	int n, q;

	scanf_s("%d %d", &n, &q);
	f(n);

	while (q--) {
		int x;
		scanf_s("%d", &x);

		printf("%d\n", value[x]);
	}

	return 0;
}