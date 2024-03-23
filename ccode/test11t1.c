#include<stdio.h>
char *mystract(char *s,char *t){
	int n=0,i=0,m=0;
	while (*(s+i)){
		i++;
		n++; 
	}
	i=0;
	while (*(t+i)){
		i++;
		m++;
	}
	for(i=0;i<m;i++){
		*(s+n+i)=*(t+i);
	}
	return s;
}
int main(){
	char s[40],t[40];
	scanf("%s%s",s,t);
	printf("%s",mystract(s,t));
	return 0;
}
