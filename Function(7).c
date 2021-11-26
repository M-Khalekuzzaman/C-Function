//Recursion using function;
#include<stdio.h>
int fact(int x)
{
    if( x == 1)
        return 1;
    else
        return x * fact(x-1);
}
int main()
{
    int num;
    printf("Enter your factorial number is : ");
    scanf("%d",&num);
   int result =  fact(num);
   printf("Factorial of %d! is : %d\n",num,result);
   getch();
}
