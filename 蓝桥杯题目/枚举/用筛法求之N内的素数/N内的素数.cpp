# include <iostream>
using namespace std;

//判断素数函数
void isprims(int n) {

	//用来判断n是否被除
	int flag = 1;

	if (n < 2) 
		return;
	//从2开始遍历到n来判断是否被整除
	for (int i = 2; i < n; i++) {

		//被整除就判断flag为0
		if (n % i == 0) 
			flag = 0;
	}

	//若flag不等于0 n就是素数 就打印n
	if (flag == 1)
		cout << n << endl;
	return;
}

int main() {

	int n;

	cin >> n;

	//判断从2 到n之间的素数
	for (int i = 2; i <= n; i++)
		isprims(i);

	return 0;
}