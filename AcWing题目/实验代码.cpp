#include <iostream>

using namespace std;

const int N = 10;

//��һ��path�������洢ÿ�ε��ײ��·�� 
int path[N];
//��һ�������������洢ÿ���Ѿ������ĵ�,Ĭ����false 
bool st[N];
int n;

//u��ʾ��ǰ�Ĳ��� 
void dfs(int u)
{
    //���Ѿ�������ײ��ˣ��ݻز����·�� 
    if (u == n)
    {
        for (int i = 0; i < n; i++) cout << path[i];
        //���ø�printf��"%s\n",s����Ĭ�ϰ��㻻�� 
        puts("");
        //�ݻ���һ�� 
        return;
    }
    else
    {
        //����ӵ�һ������ʼѭ�� 
        for (int i = 1; i <= n; i++)
        {
            //���������δ�����ʣ���ʹ�� 
            if (!st[i])
            {
                path[u] = i;
                //��ǵ�i�����Ѿ���ʹ�� 
                st[i] = true;
                //������һ�� 
                dfs(u + 1);
                //��ԭ�ֳ� 
                st[i] = false;
            }
        }
    }

}

int main()
{
    cin >> n;

    dfs(0);

    return 0;
}