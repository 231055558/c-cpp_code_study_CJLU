#include <stdio.h>
#define	T(a)  a*(a)
int s;
int f1 (int n)
{	static int s = 1;
	n = n+s;
	s++;
	return n;
}
int f2 (int n)
{	printf("%d\n",s);
	n = n+s;
	s++;
	printf("%d\n",s);
	return n;
}
int f3 (int n)
{	if (n == 1) return 1;
	else return (n+1)*f3 (n-1);
}
void main ( )
{	printf("%d\n", T(5-2) );
printf("%d\n", f1 (f1(3)) );
printf("%d\n", f2 (f2(3)) );
printf("%d\n", f3 (4) );
}


