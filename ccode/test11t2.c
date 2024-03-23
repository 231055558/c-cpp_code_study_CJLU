#include<stdio.h>
struct student{
	char num[6];
	char name[40];
	int score1,score2,score3;
};

int main(){
	struct student stu[100];
	int i,N,max,flag;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%s%s%d%d%d",stu[i].num,stu[i].name,&stu[i].score1,&stu[i].score2,&stu[i].score3);
	}
	max=stu[0].score1+stu[0].score2+stu[0].score3;
	flag=0;
	for(i=0;i<N;i++){
		if(stu[i].score1+stu[i].score2+stu[i].score3>max){
			flag = i;
			max = stu[i].score1+stu[i].score2+stu[i].score3;
		}
	}
	printf("%s %s %d",stu[flag].num,stu[flag].name,stu[flag].score1+stu[flag].score2+stu[flag].score3);
	return 0;
}
