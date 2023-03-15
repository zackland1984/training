#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Hanio_step(int n, char a, char b, char c)
{
	if (1 == n)
		printf("%c->%c\n", a, c);
	else
	{
		Hanio_step(n - 1, a, c, b);
	    printf("%c->%c\n", a, c);
		Hanio_step(n - 1, b, a, c);

    }


}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Hanio_step(n, 'A', 'B', 'C');
	return 0;

}