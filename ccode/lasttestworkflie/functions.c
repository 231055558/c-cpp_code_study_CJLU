#include<stdio.h>
#include "functions.h"
struct family {
    char name[10];
    char sex[5];
    int age;
    char phone[20];
    char homead[100];
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

void fun1(){
			per[n] = inputdata();
            printf("添加成功\n");
            n++;
            break;
}
