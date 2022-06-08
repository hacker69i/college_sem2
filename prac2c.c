#include<stdio.h>
int main(void)
{
    int a=234,b= -234,c=54321;
    printf("%2d\n",c);
    printf("%10.2d\n",c);
    printf("%-10.2d\n",c);
    printf("%-7d\n",a);
    printf("%07.2d\n",a);
    printf("%07d\n",a);
    printf("%+-9.4d\n",a);
    printf("%+09.4d\n",a);
    printf("%+07d\n",a);
    printf("%+07.4d\n",a);
    printf("%+-7.4d\n",a);
    printf("%-8d\n",b);
    printf("%-8.2d\n",b);
    printf("%-8.4d\n",b);
return 0; }
