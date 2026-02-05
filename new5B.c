#include <stdio.h>
int main()
{
    int a=5,b=6,temp;
    scanf("%d %d",&a,&b);
    temp=0;
    a=b;
    b=temp;
    printf("%d %d",a,b);
    return 0;
}