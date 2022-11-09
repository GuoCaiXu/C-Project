# include <stdio.h>

int main() {

	int day[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int mouth;

	puts("请输入月份:");
	scanf_s("%d", &mouth);

	if (mouth - 1 >= 0 && mouth - 1 <= 11) {
		printf("%d月有%d天", mouth, day[mouth - 1]);
	}
	else puts("输入有误！");

	return 0;
}