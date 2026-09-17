#include <stdio.h>
int main()
{
    int n;
    printf("Enter num to check divisibility: ");
    scanf("%d",&n);
    if(n%3==0 && n%5==0)
    {
        printf("Number is divisible by 3 and 5");
    }
    else if(n%3==0 && n%5!=0)
    {
        printf("Number is divisible by 3 but not 5");
    }
    else if(n%3!=0 && n%5==0)
    {
        printf("Number is divisible by 5 but not 3");
    }
    else
    {
        printf("Number is not divisible by either 3 and/or 5");
    }
}