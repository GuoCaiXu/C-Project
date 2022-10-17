#include<iostream>
#include<algorithm>
using namespace std;
int a[100][100];
int n;

int f(int i, int j)
{
    if (i == n)
        return a[i][j];
    return (max(f(i + 1, j), f(i + 1, j + 1)) + a[i][j]);
}
int main()
{
    int i, j;
    cin >> n;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= i; j++)
        {
            cin >> a[i][j];
        }
    cout << f(1, 1);
}
