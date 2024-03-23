#include<stdio.h>
#include <E:\code\ccode\lasttestworkflie\functions.c>
int main(){
    
struct family {
    char name[10];
    char sex[5];
    int age;
    char phone[20];
    char homead[100];
};
struct family per[1000];
char pname[10];
int etc,n=0,i,j,flag=0,del,tag,r=1;
	
	while (r){
		manu();
		scanf("%d",&etc);
        switch (etc){
        	case 0:
        		r = 0;
        		break;
        	case 1:
        		per[n] = inputdata();
        		printf("添加成功\n");
            	n++;
            	break;
            case 2:
            	for(i=0;i<n;i++){
                printf("%04d  姓名：%s  性别： %s  年龄：%d  联系电话：%s  家庭住址：%s\n",i,per[i].name,per[i].sex,per[i].age,per[i].phone,per[i].homead);
            	}
            	break;
            case 3:
            	
		}
	}
    return 0;
}
