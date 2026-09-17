#include <stdio.h>
int main()
{
    int y;
    printf("Enter year to check whether leap: ");
    scanf("%d",&y);
    if(y%4==0 && y%100!=0)
    {
        printf("Its leap year!");
    }
    else if(y%400==0)
    {
        printf("Its leap year!");
    }
    else
    {
        printf("Its not leap year");
    }
}