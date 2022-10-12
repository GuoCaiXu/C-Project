#include<iostream>
#include<string>
# include <algorithm>
using namespace std;

int main()
{
	string a, b;
	getline(cin, a);

	b = a;
	reverse(a.begin(), a.end());
	cout << b + a << endl;
}