#include<iostream>
using namespace std;
int main()
{
    char ch[100];

    cin.getline(ch, sizeof(ch));

    for (int i = strlen(ch); i >= 0; i--) {

        if(ch[i] != ' ') cout << ch[i];
    }

    return 0;
}