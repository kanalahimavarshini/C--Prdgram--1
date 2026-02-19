#include <stdio.h>
int main()
{
    int n,i;
    long fact=1;
    printf("Enter a integer :");
    scanf("%d",&n);
    if (n<0)
    printf("Error :factorial of negative number doesn't exist");
else if (n==0||n==1)
printf("factorial of %d=%ld\n",n,fact);
else{
    for (i=1;i<n;i++)
    printf("factorial of %d=%\d\n"n,fact);
}
return 0;
}
