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
    printf("*******1.�����ϵ��*******\n");
    printf("*******2.��ʾ��ϵ��*******\n");
    printf("*******3.ɾ����ϵ��*******\n");
    printf("*******4.������ϵ��*******\n");
    printf("*******5.�޸���ϵ��*******\n");
    printf("*******6.�����ϵ��*******\n");
    printf("*******0.�˳�ͨѶ¼*******\n");
    printf("**************************\n");
}

struct family inputdata() {
    struct family person;
    printf("������������\n");
    scanf("%s",person.name);
    printf("�������Ա�\n");
    scanf("%s",person.sex);
    printf("���������䣺\n");
    scanf("%d",&person.age);
    printf(" ��������ϵ�绰��\n");
    scanf("%s",person.phone);
    printf("�������ͥסַ��\n");
    scanf("%s",person.homead);
    return person;
};

void fun1(){
			per[n] = inputdata();
            printf("��ӳɹ�\n");
            n++;
            break;
}
