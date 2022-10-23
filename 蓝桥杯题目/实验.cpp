# include <iostream>
# include <algorithm>

using namespace std;

int main() {

    int x, y;
    while (cin >> x >> y, x > 0 && y > 0) {
        if (x > y) swap(x, y);

        int sum = 0;
        for (int i = x; x <= y; i++) {
            cout << i << " ";
            sum += i;
        }
        cout << "Sum=" << sum << endl;
    }

    return 0;
}