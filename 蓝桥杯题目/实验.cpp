# include <iostream>
using namespace std;

int main() {

    char c;
    cin >> c;
    double a[12][12], num = 0;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 11; i < 6; i--) {
        for (int j = 12 - i; j < i; j++) {
            num += a[j][i];
        }
    }
    if (c == 'S') printf("%.1lf", num);

    else if (c == 'M') printf("%.1lf", num / 30);

    return 0;
}