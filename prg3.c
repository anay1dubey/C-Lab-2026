#include <stdio.h>
int main()
{
    int i,e1=0,e2=1,e3,n;
    printf("Enter total elements to print(>1): ");
    scanf("%d",&n);
    printf("%d \n%d \n",e1,e2);
    for(i=3;i<=n;i++)
    {
        e3=e1+e2;
        e1=e2;
        e2=e3;
        printf("%d \n",e3);
    }
}