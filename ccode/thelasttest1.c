#include <stdio.h>
struct family {
    char name[10];
    char sex[5];
    int age;
    char phone[20];
    char homead[100];
};
//对属性输入输出
struct family inputdata() {
    struct family person;
    printf("请输入姓名：\n");
    scanf("%s",person.name);
    printf("请输入性别：\n");
    scanf("%s",person.sex);
    printf("请输入年龄：\n");
    scanf("%d",&person.age);
    printf(" 请输入联系电话：\n");
    scanf("%s",person.phone);
    printf("请输入家庭住址：\n");
    scanf("%s",person.homead);
    return person;
};
void manu(){
	printf("**************************\n");
        printf("*******1.添加联系人*******\n");
        printf("*******2.显示联系人*******\n");
        printf("*******3.删除联系人*******\n");
        printf("*******4.查找联系人*******\n");
        printf("*******5.修改联系人*******\n");
        printf("*******6.清空联系人*******\n");
        printf("*******0.退出通讯录*******\n");
        printf("**************************\n");
}


int main(){
    struct family per[1000];
    char pname[10];
    int etc,n=0,i,j,flag=0,del,tag,r=1;
    while (azz zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzr) {
        manu();
        scanf("%d",&etc);
        switch (etc)
        {
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
            printf("输入需要删除的联系人的姓名：\n");
            scanf("%s",pname);
            for(i=0;i<n;i++){
                for(j=0;*(per[i].name+j) || *(pname+j);j++){
                    if(*(per[i].name+j) != *(pname+j)){
                    	flag = 0;
                        break;}
                    else{
                        flag = 1;
                        tag = i;
                    }
                }
            }
            if ( flag = 1){
                printf("删除成功！\n");
                for(i=tag;i<n-1;i++){
                	per[i]=per[i+1];
				}
				n -= 1;
                }
            else{
                printf("查找失败！\n");
            }
            break;
        case 4:
            printf("输入需要查找的联系人姓名：\n");
            scanf("%s",pname);
            for(i=0;i<n;i++){
                for(j=0;*(per[i].name+j) || *(pname+j);j++){
                    if(*(per[i].name+j) != *(pname+j)){
                    	flag = 0;
                        break;}
                    else{
                        flag = 1;
                        tag = i;
                    }
                }
            }
            if ( flag == 1){
                printf("查找成功！\n");
                printf("%04d  姓名：%s  性别： %s  年龄：%d  联系电话：%s  家庭住址：%s\n",tag,per[tag].name,per[tag].sex,per[tag].age,per[tag].phone,per[tag].homead);
                }
            else{
                printf("查找失败！\n");
            }
            break;
        case 5:
            printf("输入需要修改的联系人姓名：\n");
            scanf("%s",pname);
            for(i=0;i<n;i++){
                for(j=0;*(per[i].name+j) || *(pname+j);j++){
                    if(*(per[i].name+j) != *(pname+j)){
                    	flag = 0;
                        break;}
                    else{
                        flag = 1;
                        tag = i;
                    }
                }
            }
            if ( flag= 1){
                printf("查找成功！\n");
                per[tag] = inputdata();
                }
            else{
                printf("查找失败！\n");
            }
            break;
        case 6:
            //for(i=0;i<n;i++){
            //    per[i] = (struct family){"","",0,"",""};
            //}
            printf("清空成功！\n");
            n=0;
            break;
        default:
            break;
        }
    }
    printf("程序退出");
    return 0;
}
