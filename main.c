#include "stdio.h"
#include "stdlib.h"

void hanoiTower_move(int n, char a, char b, char c)
{
	if(n == 1)
		printf("%c -> %c\n", a, c);
	else
	{
		hanoiTower_move(n-1, a, c, b);
		printf("%c -> %c\n", a, c);
		hanoiTower_move(n-1, b, a, c);
	}
}

int main(void)
{
	int n = 0;
	printf("input number of plates\n");
	scanf("%d", &n);
	printf("Plate Number = %d\n", n);

	hanoiTower_move(n, 'a', 'b', 'c');

	getchar();
	getchar();
}