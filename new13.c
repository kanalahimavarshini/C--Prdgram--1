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
   #include <stdio.h>

int main()
{
    int N, i;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        sum = sum + i;
    }

    printf("Sum of numbers from 1 to %d is %d", N, sum);

    return 0;
}
 #include <stdio.h>

int main()
{
    float num1, num2, result;
    int choice;

    printf("Basic Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(choice)
    {
        case 1:
            result = num1 + num2;
            printf("Result = %.2f", result);
            break;

        case 2:
            result = num1 - num2;
            printf("Result = %.2f", result);
            break;

        case 3:
            result = num1 * num2;
            printf("Result = %.2f", result);
            break;

        case 4:
            if(num2 != 0)
            {
                result = num1 / num2;
                printf("Result = %.2f", result);
            }
            else
            {
                printf("Error! Division by zero is not allowed.");
            }
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int m1, m2, m3, m4;
    int total;
    float avg;

    printf("Enter marks of 4 subjects:\n");
    scanf("%d %d %d %d", &m1, &m2, &m3, &m4);

    total = m1 + m2 + m3 + m4;
    avg = total / 4.0;

    printf("Total Marks = %d\n", total);
    printf("Average = %.2f\n", avg);

    if(avg > 75)
        printf("Grade: DISTINCTION");
    else if(avg >= 60)
        printf("Grade: FIRST CLASS");
    else if(avg >= 50)
        printf("Grade: SECOND CLASS");
    else if(avg >= 40)
        printf("Grade: THIRD CLASS");
    else
        printf("Grade: FAIL");

    return 0;
}
