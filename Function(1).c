#include<stdio.h>
/*
return_type  function_name (argument)
*/
int sum(int a ,int b)
{
   return a + b;
}
int sub(int x ,int y)
{
    return x - y;
}

int main()
{

  int num1,num2;
  printf("Enter two numbers are : ");
  scanf("%d %d",&num1,&num2);
  int s = sum(num1,num2);
  int su = sub(num1,num2);
   printf("sum is :  %d\n",s);
   printf("sub is :  %d\n",su);
    getch();

}
