//Area of triangle using user-defined function;
#include<stdio.h>
double area(double b,double h)
{
 return (0.5 * b * h);

}
int main()
{
    double base,height;
    printf("Enter triangle base : ");
    scanf("%lf",&base);

    printf("Enter triangle height : ");
    scanf("%lf",&height);

     double result = area(base,height);
     printf("Area of triangle is : %.1lf\n",result);
    getch();
}
