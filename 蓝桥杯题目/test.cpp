# include <iostream>
# include <string>

using namespace std;

int main() {

	string s = "abc";
	string s1 = "abb";
	string s2 = "aab";
	string s3 = "abb";

	cout << s.compare(s1) << endl;     // s > s1
	cout << s2.compare(s1) << endl;    // s2 < s1
	cout << s3.compare(s1) << endl;    // s3 = s1

	return 0;
}