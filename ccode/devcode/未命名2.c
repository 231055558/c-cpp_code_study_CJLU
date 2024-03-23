#include<stdio.h>
#include<string.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    char ch[1001]={0};
    scanf("%s",ch);
    int len = strlen(ch);
    int col=len/n;
    if(len%n!=0)
    {
        col+=1;
    }
    int j = 0;
    int index = 0;
    char arr[100][100]={0};
    for(j=col-1;j>=0;j--)
    {
        int i = 0;
        for(i=0;i<n;i++)
        {
            if(ch[index]!='\0')
            {
                arr[i][j]=ch[index];
                index++;
            }
            else
            {
                arr[i][j]=' ';
            }
        }
    }
    int i = 0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
