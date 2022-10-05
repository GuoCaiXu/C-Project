# include <iostream>
# include <string>
#include <algorithm>

using namespace std;

int main() {

	string Letter;

	getline(cin , Letter);

	reverse(Letter.begin(), Letter.end());

	cout << Letter << endl;

	return 0;
}