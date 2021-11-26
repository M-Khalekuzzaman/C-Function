//x to the power y (using /not using) Library function
#include<stdio.h>
 void calcultePower(double base,double exp)
{
    double result = 1;
     for(int i  =1 ; i<=exp ; i++)
   {
      result = result * base;
   }
   printf("Result is : %.2lf\n",result);
}
int main()
{
    double base,exp;

    printf("Enter base : ");
    scanf("%lf",&base);

    printf("Enter exponent : ");
    scanf("%lf",&exp);

    calcultePower(base,exp);
   //result =  pow(base,exp);

   getch();
}
