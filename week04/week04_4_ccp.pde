// week04-4.cpp SOIT106 _BAST_008
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	for (int i=a; i<=b; i++) {
		if (i%5==0) printf("%d\n", i);
	}
	for (int i=b; i<=a; i++) {
		if(i%5==0) printf("%d\n", i);
	}
}
