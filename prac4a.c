#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c = 0;
    int ch;
    printf("\nEnter two numbers\n" );
    scanf("%d%d",&a,&b);
    printf("\n\n");
    printf("\n 1-ADD\n");
    printf("\n 2-SUB\n");
    printf("\n 3-MULTI\n");
    printf("\n 4-DIVIDE\n");
    printf("\n 5-MODULO\n");
    printf("\nEnter your choice of operation\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: c=a+b;
            break;
        case 2: c=a-b;
            break;
        case 3: c=a*b;
            break;
        case 4:
            if(b==0) {
                printf("\n Divide by zero error! \n");
                break; }
            else
            {c=a/b;
                break; }
            
        case 5:c=a%b;
            break;
        default:
            printf("\nInvalid choice! \n");
            break;
    }
    printf("\nThe result is %d\n",c);
}
