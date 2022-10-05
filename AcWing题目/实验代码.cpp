#include <iostream>

using namespace std;

const int N = 10;

//用一个path数组来存储每次到底层的路径 
int path[N];
//用一个布尔数组来存储每次已经遍历的点,默认是false 
bool st[N];
int n;

//u表示当前的层数 
void dfs(int u)
{
    //当已经到达最底层了，溯回并输出路径 
    if (u == n)
    {
        for (int i = 0; i < n; i++) cout << path[i];
        //作用跟printf（"%s\n",s），默认帮你换行 
        puts("");
        //溯回上一层 
        return;
    }
    else
    {
        //这里从第一个数开始循环 
        for (int i = 1; i <= n; i++)
        {
            //如果该数字未被访问，就使用 
            if (!st[i])
            {
                path[u] = i;
                //标记第i个数已经被使用 
                st[i] = true;
                //进入下一层 
                dfs(u + 1);
                //还原现场 
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