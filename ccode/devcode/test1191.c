#include<stdio.h>
#include<string.h>
int main(){
	char str[]="abc\000def\n";
	int len;
	size_t size;
	printf("%s\n",str);
	len = strlen(str);
	size = sizeof(str);
	printf("%d\n%zu",len,size);
	return 0;
}
