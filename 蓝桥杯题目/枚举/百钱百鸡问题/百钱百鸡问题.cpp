# include <iostream>
using namespace std;

/*
����:x, ĸ��:y, С��:z

�г���������ʽ��
		����x + y + z = 100
		Ǯ��15*x + 9*y + z = 300
*/

int main() {

	int x, y, z;

	for (x = 0; x < 20; x++) {

		y = 25 - (1.75 * x);  //�������������̿��Խ���������
		z = 100 - y - x; //Ȼ�����y��ȥ �ж�x�Ƿ����

		if (z == (300 - (9 * y) - (15 * x)) && z % 3 == 0 && y > 0 && z > 0)
			cout << "cock=" << x << "," << "hen=" << y << "," << "chicken=" << z << endl;
	}
	return 0;
}