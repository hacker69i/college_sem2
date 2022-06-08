#include<stdio.h>
#define PI 3.14
void main()
{   float ba,he,len,bre,ra;
    float aa,area_squ,area_rect,area_circle;
    printf("Enter the base and height\n");
    scanf("%f %f",&ba,&he);
    printf("Base=%f,Height=%f \n",ba,he);
    printf("Enter the length and breadth\n");
    scanf("%f %f",&len,&bre);
    printf("Length=%f,breath=%f \n",len,bre);
    printf("Enter the radius\n");
    scanf("%f",&ra);
    printf("Radius=%f \n",ra);
    aa=(0.5*ba*he);
    area_squ=(len*len);
    area_rect=(len*bre);
    area_circle=(PI*ra*ra);
    printf("Area of Triangle=%f\n",aa);
    printf("Area of Square=%f\n",area_squ);
    printf("Area of Rectangle=%f\n",area_rect);
    printf("Area of Circle=%f\n",area_circle);
}



