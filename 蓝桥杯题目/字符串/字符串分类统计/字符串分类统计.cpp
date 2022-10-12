# include <iostream>
# include <cstring>
using namespace std;

int main() {

	int latter = 0, num = 0, space = 0, ch = 0;

	char n[200];

	cin.getline(n, sizeof(n));

	for (int i = 0; i < strlen(n); i++) {

		if (isalpha(n[i])) latter++;
		else if (isdigit(n[i])) num++;
		else if (n[i] == 32) space++;
		else ch++; 
	}

	cout << latter << " " << num << " " << space << " " << ch << endl;

	return 0;
}