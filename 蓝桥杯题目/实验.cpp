#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
bool cmp(int a, int b);
int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        int a[100];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, cmp);//使用sort函数排序。
        for (int j = 0; j < n; j++)
        {
            if (j)
                cout << " ";
            cout << a[j];
        }
        cout << endl;
    }
}
bool cmp(int a, int b)//自定义一个返回绝对值大小的函数
{
    return abs(a) > abs(b);
}