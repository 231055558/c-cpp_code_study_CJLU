#include <stdio.h>
struct family {
    char name[10];
    char sex[5];
    int age;
    char phone[20];
    char homead[100];
};
//�������������
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
            printf("��ӳɹ�\n");
            n++;
            break;                                                                                                   
        case 2:
            for(i=0;i<n;i++){
                printf("%04d  ������%s  �Ա� %s  ���䣺%d  ��ϵ�绰��%s  ��ͥסַ��%s\n",i,per[i].name,per[i].sex,per[i].age,per[i].phone,per[i].homead);
            }
            break;
        case 3:
            printf("������Ҫɾ������ϵ�˵�������\n");
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
                printf("ɾ���ɹ���\n");
                for(i=tag;i<n-1;i++){
                	per[i]=per[i+1];
				}
				n -= 1;
                }
            else{
                printf("����ʧ�ܣ�\n");
            }
            break;
        case 4:
            printf("������Ҫ���ҵ���ϵ��������\n");
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
                printf("���ҳɹ���\n");
                printf("%04d  ������%s  �Ա� %s  ���䣺%d  ��ϵ�绰��%s  ��ͥסַ��%s\n",tag,per[tag].name,per[tag].sex,per[tag].age,per[tag].phone,per[tag].homead);
                }
            else{
                printf("����ʧ�ܣ�\n");
            }
            break;
        case 5:
            printf("������Ҫ�޸ĵ���ϵ��������\n");
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
                printf("���ҳɹ���\n");
                per[tag] = inputdata();
                }
            else{
                printf("����ʧ�ܣ�\n");
            }
            break;
        case 6:
            //for(i=0;i<n;i++){
            //    per[i] = (struct family){"","",0,"",""};
            //}
            printf("��ճɹ���\n");
            n=0;
            break;
        default:
            break;
        }
    }
    printf("�����˳�");
    return 0;
}
