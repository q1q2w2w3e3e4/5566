#include<stdio.h>
#include<windows.h>
#include<conio.h>
int add();
int amend();
int remove();
int show_student();
int show_class();
struct info                      //����ṹ��info,���ڴ洢ѧ����Ϣ
{
    char name[20];   //����
    char sex[20];    //�Ա�
    char idcard[20];     //���֤����
    char stuid[10];      //ѧ��
    char academe[20];    //ѧԺ
    char specialty[20];  //רҵ
    char classid[20];    //�༶
    char home[20];         //��Դ��
}stu[100];
int j=0;
int main(void)                   //������
{
    /*��½�������*/
    char gongnengxuanzhe;
    int flag=1;
    system("cls");
    printf("\n");
    printf("\t\t\t\t  ��ӭ\n");
    printf("\n\n\t�𾴵��û��� �ǳ���л��ʹ�ñ�ϵͳ �� �����������齫������ǰ���ķ��� !\n\n\n");
    printf("\tϵͳ���ܼ�飺\n\n\n");
    printf("\t\t�٣�ͨ����������ĳλѧ����ѧ��֤��Ϣ��\n\n");
    printf("\t\t�ڣ�����ѧ�ţ���ʾĳλѧ����ѧ��֤��Ϣ��\n\n");
    printf("\t\t�ۣ�����ĳ���༶�İ�ţ���ʾ�ð�����ѧ����ѧ��֤��Ϣ��\n\n");
    printf("\t\t�ܣ�����ĳλѧ����ѧ�ţ��޸ĸ�ѧ����ѧ��֤��Ϣ��\n\n");
    printf("\t\t�ݣ�����ĳλѧ����ѧ�ţ�ɾ����ѧ����ѧ��֤��Ϣ��\n\n");
    printf("\t\t�ޣ����������ڶ�ȫ��ѧ������Ϣ��������\n\n\n");
    printf("\t�����������ϵͳ......");
    getch();
    do
    {
        system("cls");
        printf("\n\n\n");
        printf("                    �𾴵��û� ����ӭ��ʹ�ñ�ϵͳ !\n");
        printf("\n\n\n");
        printf("                              1.����ѧ����Ϣ\n\n");
        printf("                              2.�޸�ѧ����Ϣ\n\n");
        printf("                              3.ɾ��ѧ����Ϣ\n\n");
        printf("                              4.��ʾ����ѧ����Ϣ\n\n");
        printf("                              5.��ʾ�����༶ѧ����Ϣ\n\n");
        printf("                              0.�˳�ϵͳ\n\n\n\n");
        printf("                    ��ѡ������Ҫʹ�õĹ���:");
        gongnengxuanzhe=getch();
        switch(gongnengxuanzhe)
        {
            case '1':add();break;
            case '2':amend();break;
            case '3':remove();break;
            case '4':show_student();break;
            case '5':show_class();break;
            case '0':flag=0;break;
            default:
            {
                printf("\n\n                    ����������������ϸ�Ķ�ʹ��˵��!");
                printf("\n                    ���������...");
                getch();
            }

        }
    }while(flag==1);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\t�𾴵��û����ǳ���л����ʹ�ã�������������׷��������Ψһ�Ķ�����");
    printf("\n\n\t\t\t      ��������˳�ϵͳ......");
    getch();
    return 0;
}
int add()                        //����ѧ����Ϣ����
{
    char flag='1';
    do
    {
        system("cls");
        printf("\n\t������");
        scanf("%s",&stu[j].name);
        printf("\n\n\t�Ա�");
        scanf("%s",&stu[j].sex);
        printf("\n\n\t���֤�ţ�");
        scanf("%s",&stu[j].idcard);
        printf("\n\n\tѧԺ:");
        scanf("%s",&stu[j].academe);
        printf("\n\n\tרҵ��");
        scanf("%s",&stu[j].specialty);
        printf("\n\n\t�༶��");
        scanf("%s",&stu[j].classid);
        printf("\n\n\tѧ�ţ�");
        scanf("%s",&stu[j].stuid);
        printf("\n\n\t��Դ�أ�");
        scanf("%s",&stu[j].home);
        j++;
        printf("\n\t�������������1,������������������:");
        getchar();
        flag=getchar();
    }while(flag=='1');
    return 0;
}
int amend()                      //�޸�ѧ����Ϣ����
{
    if(j==0)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t   ϵͳ���κο����޸ĵļ�¼���������������ݣ�");
        printf("\n\n\t\t\t         �����������......");
        getch();
        return 0;
    }
    char a[20];
    int z;
    int flag=0;
    do
    {
        system("cls");
        printf("\n\t��Ҫ�޸ĵ�ѧ��ѧ�ţ�");
        scanf("%s",a);
        for(z=0;z<j;z++)
        {
            if(strcmp(stu[z].stuid,a)==0)
            {
                flag=1;
                break;               //break�˳���z++����ִ��
            }
        }
        if(flag==0)
        {
            printf("\t�Բ���������ѧ����Ϣ�����ڣ����ʵ������!\n");
            printf("\t�����������......");
            getch();
        }
    }while(flag==0);
    system("cls");
    printf("\n\t������");
    scanf("%s",&stu[z].name);
    printf("\n\n\t�Ա�");
    scanf("%s",&stu[z].sex);
    printf("\n\n\t���֤�ţ�");
    scanf("%s",&stu[z].idcard);
    printf("\n\n\tѧԺ:");
    scanf("%s",&stu[z].academe);
    printf("\n\n\tרҵ��");
    scanf("%s",&stu[z].specialty);
    printf("\n\n\t�༶��");
    scanf("%s",&stu[z].classid);
    printf("\n\n\tѧ�ţ�");
    scanf("%s",&stu[z].stuid);
    printf("\n\n\t��Դ�أ�");
    scanf("%s",&stu[z].home);
 return 0;
}
int remove()                     //ɾ��ѧ����Ϣ����
{
    if(j==0)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t   ϵͳ���κο���ɾ���ļ�¼���������������ݣ�");
        printf("\n\n\t\t\t         �����������......");
        getch();
        return 0;
    }
    char a[20];
    int z;
    int x;
    int flag=0;
    do
    {
        system("cls");
        printf("\n\t��Ҫɾ����ѧ��ѧ�ţ�");
        scanf("%s",a);
        for(z=0;z<j;z++)
        {
            if(strcmp(stu[z].stuid,a)==0)
            {
                flag=1;
                for(x=z;x<j;x++)
                {
                    strcpy(stu[x].name,stu[x+1].name);
                    strcpy(stu[x].sex,stu[x+1].sex);
                    strcpy(stu[x].idcard,stu[x+1].idcard);
                    strcpy(stu[x].academe,stu[x+1].academe);
                    strcpy(stu[x].specialty,stu[x+1].specialty);
                    strcpy(stu[x].classid,stu[x+1].classid);
                    strcpy(stu[x].stuid,stu[x+1].stuid);
                    strcpy(stu[x].stuid,stu[x+1].stuid);
                }
                j--;
                printf("\n\tɾ���ɹ�!");
                printf("\n\t������������ϼ��˵�......");
                getch();
            }
        }
        if(flag==0)
        {
            printf("\t�Բ���������ѧ����Ϣ�����ڣ����ʵ������!\n");
            printf("\t�����������......");
            getch();
        }
    }while(flag==0);
 return 0;
}
int show_student()                //������ʾѧ����Ϣ����
{
    if(j==0)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t   ϵͳ���κο�����ʾ�ļ�¼���������������ݣ�");
        printf("\n\n\t\t\t         �����������......");
        getch();
        return 0;
    }
    char a[20];
    int z;
    int flag=0;
    do
    {
        system("cls");
        printf("\n\t��Ҫ��ʾ��ѧ��ѧ�ţ�");
        scanf("%s",a);
        for(z=0;z<j;z++)
        {
            if(strcmp(stu[z].stuid,a)==0)
            {
                flag=1;
                system("cls");
                printf("\n\t������%s",stu[z].name);
                printf("\n\n\t�Ա�%s",stu[z].sex);
                printf("\n\n\t���֤�ţ�%s",stu[z].idcard);
                printf("\n\n\tѧԺ:%s",stu[z].academe);
                printf("\n\n\tרҵ��%s",stu[z].specialty);
                printf("\n\n\t�༶��%s",stu[z].classid);
                printf("\n\n\tѧ�ţ�%s",stu[z].stuid);
                printf("\n\n\t��Դ�أ�%s",stu[z].home);
                printf("\n\n\t������������ϼ��˵�......");
                getch();
            }
        }
        if(flag==0)
        {
            printf("\t�Բ�����������ʾ��ѧ����Ϣ�����ڣ����ʵ������!\n");
            printf("\t�����������......");
            getch();
        }
    }while(flag==0);
 return 0;
}
int show_class()                 //��ʾ�����༶ѧ����Ϣ����
{
    if(j==0)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t   ϵͳ���κο�����ʾ�ļ�¼���������������ݣ�");
        printf("\n\n\t\t\t         �����������......");
        getch();
        return 0;
    }
    char a[20];
    int z;
    int x;
    int flag=0;
    do
    {
        system("cls");
        printf("\n\t��Ҫ��ʾ�İ༶���룺");
        scanf("%s",a);
        for(z=0;z<j;z++)
        {
            if(strcmp(stu[z].classid,a)==0)
            {
                flag=1;
                system("cls");
                printf("\t%s  %s ������Ϣ\n",stu[z].specialty,stu[z].classid);
                for(x=0;x<j;x++)
                {
                    if(strcmp(stu[x].classid,a)==0)
                    {
                        printf("\n\n\t������%s",stu[z].name);
                     printf("\n\t�Ա�%s",stu[z].sex);
                 printf("\n\t���֤�ţ�%s",stu[z].idcard);
                 printf("\n\tѧԺ:%s",stu[z].academe);
                 printf("\n\tרҵ��%s",stu[z].specialty);
                 printf("\n\t�༶��%s",stu[z].classid);
                 printf("\n\tѧ�ţ�%s",stu[z].stuid);
                 printf("\n\t��Դ�أ�%s",stu[z].home);
                    }
                }
                printf("\n\n\t������������ϼ��˵�......");
                getch();
            }
        }
        if(flag==0)
        {
            printf("\t�Բ�����������ʾ�İ༶��Ϣ�����ڣ����ʵ������!\n");
            printf("\t�����������......");
            getch();
        }
    }while(flag==0);
 return 0;
}