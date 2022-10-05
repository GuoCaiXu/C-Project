# include <iostream>
# include <vector>
# include <queue>
using namespace std;

int main() {

	vector<int>a, b;
	priority_queue<int>q;

	int k;

	cout << "请输入模式：" << endl;
	cout << "1. 例子数据" << endl;
	cout << "2. 自输入数据" << endl;

	int cloose;
	cin >> cloose;

	if (cloose == 1) {

		k = 4;

		for (int i = 1; i < 9; i++) {

			a.push_back(i);
		}
	}
	else {

		cin >> k;

		for (int i = 0; i < 10; i++) {

			int temp;
			cin >> temp;
			a.push_back(temp);
		}
	}

	for (auto i : a) {

		q.push(i);

		if (q.size() > k) q.pop();
	}
	
	while (q.size()) b.push_back(q.top()), q.pop();

	reverse(b.begin(), b.end());

	for (auto i : b) {

		cout << i << " ";
	}
	cout << endl;

	return 0;
}