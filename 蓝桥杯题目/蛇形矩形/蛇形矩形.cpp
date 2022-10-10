#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N = 0;
    cin >> N;
    vector<vector<int>> matrix(N, vector<int>(N, 0)); // ȫ0��N*N����
    int count = 1; // ��������һֱ����
    for (int i = 0; i < N; ++i) {
        for (int j = i; j >= 0; --j) {
            matrix[j][i - j] = count++; // �������ξ���
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N - i; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl; // δ����ÿ�е����һ���ո�
    }
    return 0;
}
