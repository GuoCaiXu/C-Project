# include <stdio.h>

int main() {

	int day[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int mouth;

	puts("�������·�:");
	scanf_s("%d", &mouth);

	if (mouth - 1 >= 0 && mouth - 1 <= 11) {
		printf("%d����%d��", mouth, day[mouth - 1]);
	}
	else puts("��������");

	return 0;
}