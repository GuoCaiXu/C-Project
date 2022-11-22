# include <iostream>

using namespace std;

const int N = 100000010;

int vis[N];  //划掉合数
int prim[N]; // 记录质数
int cnt;  //质数个数

void get_prim(int n) {  //线性筛选
	for (int i = 2; i <= n; i++) {

		if (!vis[i]) prim[++ cnt] = i;

		for (int j = 1; i * prim[j] <= n; j++) {
			vis[i * prim[j]] = 1;
			if (i % prim[j] == 0) break;
		}
	}
}

int main() {

	int n;
	cin >> n;

	get_prim(n);

	for (int i = 1; i <= cnt; i++) {
		cout << prim[i] << ' ';
	}

	return 0;
}