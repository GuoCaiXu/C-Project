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
        sort(a, a + n, cmp);//ʹ��sort��������
        for (int j = 0; j < n; j++)
        {
            if (j)
                cout << " ";
            cout << a[j];
        }
        cout << endl;
    }
}
bool cmp(int a, int b)//�Զ���һ�����ؾ���ֵ��С�ĺ���
{
    return abs(a) > abs(b);
}