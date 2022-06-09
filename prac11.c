#include<stdio.h>
typedef struct student
{
    char name[10];
    int rollno,t[3];
}stud;
int main()
{
    int i,roll,n,a,msum=0,grt;
    stud s[20];
    printf("enter the number of students=\n ");
    scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("\nenter the name of %d student= \n",i+1);
    scanf("%s",s[i].name);
    printf("\nenter the roll no of %d student= \n",i+1);
    scanf("%d",&s[i].rollno);
    printf("\nenter the 3 test scores of %d student= \n",i+1);
    scanf("%d%d%d",&s[i].t[0],&s[i].t[1],&s[i].t[2]);
}
    printf("\nenter the rollno of the student details required= \n");
    scanf("%d",&roll);
for(i=0;i<n;i++)
{
if(s[i].rollno==roll)
break;
else
continue;
}
a=i;
    printf("\nthe name of the student is= %s\n",s[i].name);
    printf("\nthe 3 test scores of the student=\n ");
    printf("%d %d %d",s[a].t[0],s[a].t[1],s[a].t[2]);
    for(i=0;i<n;i++)
    { msum=(s[i].t[0]+s[i].t[1]+s[i].t[2])/3;
        if(s[i].t[0] > s[i].t[1])
        {
            if(s[i].t[0] > s[i].t[2]) grt=s[i].t[0];
            else
                grt=s[i].t[2];
            
        }
        else if(s[i].t[1] > s[i].t[2])
            grt=s[i].t[1];
        else
            grt=s[i].t[2];
        printf("\n the average mark of %d student is %d\n",i+1,msum);
        printf("\n greatest mark of %d student is %d\n",i+1,grt);
}
return 0; }

