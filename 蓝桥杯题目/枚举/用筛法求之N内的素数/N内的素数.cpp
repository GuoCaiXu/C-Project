# include <iostream>
using namespace std;

//�ж���������
void isprims(int n) {

	//�����ж�n�Ƿ񱻳�
	int flag = 1;

	if (n < 2) 
		return;
	//��2��ʼ������n���ж��Ƿ�����
	for (int i = 2; i < n; i++) {

		//���������ж�flagΪ0
		if (n % i == 0) 
			flag = 0;
	}

	//��flag������0 n�������� �ʹ�ӡn
	if (flag == 1)
		cout << n << endl;
	return;
}

int main() {

	int n;

	cin >> n;

	//�жϴ�2 ��n֮�������
	for (int i = 2; i <= n; i++)
		isprims(i);

	return 0;
}