//finding maximum value from an array using function
#include<stdio.h>
int maximum(int x[])
{
    int max = x[0];
       for(int i = 0; i<6 ; i++)
    {
        if(max < x[i])
            max = x[i];
    }
     return max ;


}
int main()
{

    int num[] = {10,20,50,3,13,4};

    int max = maximum(num);
    printf("Maximum value is : %d",max);

    getch();
}
