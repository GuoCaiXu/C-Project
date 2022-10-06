#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
const int maxn = 101;
int n, m;
char map[maxn][maxn];
int x[maxn], y[maxn];
int vist[maxn][maxn];
void check(int dx, int dy)
{
    if (dx - 1 >= 0)
        vist[dx - 1][dy]++;
    if (dx + 1 < n)
        vist[dx + 1][dy]++;
    if (dy + 1 >= 0)
        vist[dx][dy + 1]++;
    if (dy - 1 < m)
        vist[dx][dy - 1]++;
    if (dx - 1 >= 0 && dy + 1 < m)
        vist[dx - 1][dy + 1]++;
    if (dx + 1 < n && dy - 1 >= 0)
        vist[dx + 1][dy - 1]++;
    if (dx + 1 < n && dy + 1 < m)
        vist[dx + 1][dy + 1]++;
    if (dx - 1 >= 0 && dy - 1 >= 0)
        vist[dx - 1][dy - 1]++;
}
int main()
{
    int num = 1;
    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
            break;
        memset(map, 0, sizeof(map));
        memset(vist, 0, sizeof(vist));
        int k = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                cin >> map[i][j];
                if (map[i][j] == '*')
                    check(i, j);
            }
        cout << "Field" << num << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (map[i][j] == '*')
                {
                    cout << "*";
                }
                else
                {
                    cout << vist[i][j];
                }
            }
            cout << endl;
        }
        cout << endl;
        num++;
    }
    return 0;
}