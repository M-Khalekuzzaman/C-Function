#include<stdio.h>
void squre(int a)
{
    int result = a * a;
    printf("squre number is : %d\n",result);
}
int main()
{
    while(1)
    {
        int num;
        printf("Enter any integer number : ");
        scanf("%d",&num);
        squre(num);
        printf("\n");

    }
    getch();
}
