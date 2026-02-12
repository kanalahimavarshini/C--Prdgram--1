#include <stdio.h>
#include <math.h>
int main()
{
    float
    a,b.c,real,imag;
    float
    root1,root2,d;
    printf("enter the values of co-efficient a,b,c in a single line with space in between :\n");
    scanf("%f%f%f",&a,&b,&c);
    d=((b*b)-(4*a*c));
    if (d==0)
    {
    printf("the roots are real and equal\n");
    root1=root2=((-b)/(2*a));
    printf("root1=root2 is %.3f\n",root1);
    }
    else if(d>0)
    { 
        printf("the roots are real and distinct\n");
        root1=(((-b)+sqrt(d)/2*a));
        root2=(((-b)-sqrt(d)/2*a));
        printf("root1 is %.3f\n root 2 is %.3f \n",root1,root2);
    }
    else
    {
        printf("the roots are real and imaginary\n");
        real=(-b)/(2*a);
        imag=sqrt(fabs(d))/(2*a);
        printf("root1 is %.3f+i%.3f\n",real,imag);
        printf("root2 is %.3f-i%.3f\n",real,imag);    
    }
}
#include <stdio.h>
int main()
{
    int a=6,b=8,temp;
    scanf("%d %d";&a,&b);
    temp=0;
    a=b;
    b=temp;
    printf("%d %d",a,b);
    return 0;
}