# include <iostream>
# include <string>
using namespace std;

int main() {

	int n;
	string a;
	string b;

	cin >> n;
	getchar();  //½ÓÊÜ×Ö·û

	while (n--)
	{
		getline(cin, a);
		cout << a << endl << endl;
	}

	while (cin >> b)
	{
		cout << b << endl << endl;
		b = "";
	}
	return 0;
}