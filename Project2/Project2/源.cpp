#include<stdio.h>
#include<windows.h>
#include<conio.h>
int add();
int amend();
int remove();
int show_student();
int show_class();
struct info                      //定义结构体info,用于存储学生信息
{
    char name[20];   //姓名
    char sex[20];    //性别
    char idcard[20];     //身份证号码
    char stuid[10];      //学号
    char academe[20];    //学院
    char specialty[20];  //专业
    char classid[20];    //班级
    char home[20];         //生源地
}stu[100];
int j=0;
int main(void)                   //主函数
{
    /*登陆界面设计*/
    char gongnengxuanzhe;
    int flag=1;
    system("cls");
    printf("\n");
    printf("\t\t\t\t  欢迎\n");
    printf("\n\n\t尊敬的用户， 非常感谢您使用本系统 ， 您的完美体验将是我们前进的方向 !\n\n\n");
    printf("\t系统功能简介：\n\n\n");
    printf("\t\t①：通过键盘输入某位学生的学生证信息。\n\n");
    printf("\t\t②：给定学号，显示某位学生的学生证信息。\n\n");
    printf("\t\t③：给定某个班级的班号，显示该班所有学生的学生证信息。\n\n");
    printf("\t\t④：给定某位学生的学号，修改该学生的学生证信息。\n\n");
    printf("\t\t⑤：给定某位学生的学号，删除该学生的学生证信息。\n\n");
    printf("\t\t⑥：按出生日期对全班学生的信息进行排序。\n\n\n");
    printf("\t按任意键进入系统......");
    getch();
    do
    {
        system("cls");
        printf("\n\n\n");
        printf("                    尊敬的用户 ，欢迎您使用本系统 !\n");
        printf("\n\n\n");
        printf("                              1.增加学生信息\n\n");
        printf("                              2.修改学生信息\n\n");
        printf("                              3.删除学生信息\n\n");
        printf("                              4.显示单个学生信息\n\n");
        printf("                              5.显示整个班级学生信息\n\n");
        printf("                              0.退出系统\n\n\n\n");
        printf("                    请选择您需要使用的功能:");
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
                printf("\n\n                    您的输入有误，请仔细阅读使用说明!");
                printf("\n                    任意键继续...");
                getch();
            }

        }
    }while(flag==1);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\t尊敬的用户，非常感谢您的使用，您对于完美的追求是我们唯一的动力！");
    printf("\n\n\t\t\t      按任意键退出系统......");
    getch();
    return 0;
}
int add()                        //增加学生信息函数
{
    char flag='1';
    do
    {
        system("cls");
        printf("\n\t姓名：");
        scanf("%s",&stu[j].name);
        printf("\n\n\t性别：");
        scanf("%s",&stu[j].sex);
        printf("\n\n\t身份证号：");
        scanf("%s",&stu[j].idcard);
        printf("\n\n\t学院:");
        scanf("%s",&stu[j].academe);
        printf("\n\n\t专业：");
        scanf("%s",&stu[j].specialty);
        printf("\n\n\t班级：");
        scanf("%s",&stu[j].classid);
        printf("\n\n\t学号：");
        scanf("%s",&stu[j].stuid);
        printf("\n\n\t生源地：");
        scanf("%s",&stu[j].home);
        j++;
        printf("\n\t继续增加请键入1,返回请键入其他任意键:");
        getchar();
        flag=getchar();
    }while(flag=='1');
    return 0;
}
int amend()                      //修改学生信息函数
{
    if(j==0)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t   系统无任何可以修改的记录，请先行输入数据！");
        printf("\n\n\t\t\t         按任意键返回......");
        getch();
        return 0;
    }
    char a[20];
    int z;
    int flag=0;
    do
    {
        system("cls");
        printf("\n\t需要修改的学生学号：");
        scanf("%s",a);
        for(z=0;z<j;z++)
        {
            if(strcmp(stu[z].stuid,a)==0)
            {
                flag=1;
                break;               //break退出后，z++不会执行
            }
        }
        if(flag==0)
        {
            printf("\t对不起，你请求学生信息不存在，请核实后重试!\n");
            printf("\t按任意键继续......");
            getch();
        }
    }while(flag==0);
    system("cls");
    printf("\n\t姓名：");
    scanf("%s",&stu[z].name);
    printf("\n\n\t性别：");
    scanf("%s",&stu[z].sex);
    printf("\n\n\t身份证号：");
    scanf("%s",&stu[z].idcard);
    printf("\n\n\t学院:");
    scanf("%s",&stu[z].academe);
    printf("\n\n\t专业：");
    scanf("%s",&stu[z].specialty);
    printf("\n\n\t班级：");
    scanf("%s",&stu[z].classid);
    printf("\n\n\t学号：");
    scanf("%s",&stu[z].stuid);
    printf("\n\n\t生源地：");
    scanf("%s",&stu[z].home);
 return 0;
}
int remove()                     //删除学生信息函数
{
    if(j==0)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t   系统无任何可以删除的记录，请先行输入数据！");
        printf("\n\n\t\t\t         按任意键返回......");
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
        printf("\n\t需要删除的学生学号：");
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
                printf("\n\t删除成功!");
                printf("\n\t按任意键返回上级菜单......");
                getch();
            }
        }
        if(flag==0)
        {
            printf("\t对不起，你请求学生信息不存在，请核实后重试!\n");
            printf("\t按任意键继续......");
            getch();
        }
    }while(flag==0);
 return 0;
}
int show_student()                //单个显示学生信息函数
{
    if(j==0)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t   系统无任何可以显示的记录，请先行输入数据！");
        printf("\n\n\t\t\t         按任意键返回......");
        getch();
        return 0;
    }
    char a[20];
    int z;
    int flag=0;
    do
    {
        system("cls");
        printf("\n\t需要显示的学生学号：");
        scanf("%s",a);
        for(z=0;z<j;z++)
        {
            if(strcmp(stu[z].stuid,a)==0)
            {
                flag=1;
                system("cls");
                printf("\n\t姓名：%s",stu[z].name);
                printf("\n\n\t性别：%s",stu[z].sex);
                printf("\n\n\t身份证号：%s",stu[z].idcard);
                printf("\n\n\t学院:%s",stu[z].academe);
                printf("\n\n\t专业：%s",stu[z].specialty);
                printf("\n\n\t班级：%s",stu[z].classid);
                printf("\n\n\t学号：%s",stu[z].stuid);
                printf("\n\n\t生源地：%s",stu[z].home);
                printf("\n\n\t按任意键返回上级菜单......");
                getch();
            }
        }
        if(flag==0)
        {
            printf("\t对不起，你请求显示的学生信息不存在，请核实后重试!\n");
            printf("\t按任意键继续......");
            getch();
        }
    }while(flag==0);
 return 0;
}
int show_class()                 //显示整个班级学生信息函数
{
    if(j==0)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t   系统无任何可以显示的记录，请先行输入数据！");
        printf("\n\n\t\t\t         按任意键返回......");
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
        printf("\n\t需要显示的班级号码：");
        scanf("%s",a);
        for(z=0;z<j;z++)
        {
            if(strcmp(stu[z].classid,a)==0)
            {
                flag=1;
                system("cls");
                printf("\t%s  %s 基本信息\n",stu[z].specialty,stu[z].classid);
                for(x=0;x<j;x++)
                {
                    if(strcmp(stu[x].classid,a)==0)
                    {
                        printf("\n\n\t姓名：%s",stu[z].name);
                     printf("\n\t性别：%s",stu[z].sex);
                 printf("\n\t身份证号：%s",stu[z].idcard);
                 printf("\n\t学院:%s",stu[z].academe);
                 printf("\n\t专业：%s",stu[z].specialty);
                 printf("\n\t班级：%s",stu[z].classid);
                 printf("\n\t学号：%s",stu[z].stuid);
                 printf("\n\t生源地：%s",stu[z].home);
                    }
                }
                printf("\n\n\t按任意键返回上级菜单......");
                getch();
            }
        }
        if(flag==0)
        {
            printf("\t对不起，你请求显示的班级信息不存在，请核实后重试!\n");
            printf("\t按任意键继续......");
            getch();
        }
    }while(flag==0);
 return 0;
}