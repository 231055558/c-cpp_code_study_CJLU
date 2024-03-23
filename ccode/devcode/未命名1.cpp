#include <stdio.h>
#define	T(a)  a*(a)
int s;
int f1(int n)
{	static int s = 1;
	n = n+s;
	printf("%d\n",s);
	s++;
	return n;
}
int f2(int n)
{	n = n+s;
	printf("%d\n",s);
	s++;
	return n;
}
int f3(int n)
{	if (n == 1) return 1;
	else return (n+1)*f3 (n-1);
}
int main()
{	//printf("%d\n",T(5-2) );
	printf("%d\n",f1(f1(3)) );
	printf("%d\n",f2(f2(3)) );
	//printf("%d\n",f3(4) );
	return 0;
}

