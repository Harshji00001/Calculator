#include<stdio.h>
#include<conio.h>
int main()
{
    int Addition,Subtraction,Multiplication,Division,a,b,Select;
    printf("Select any one of the following:\n");
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    printf("Enter your Select:\n");
    scanf("%d",&Select);
    if(Select==1)
    {
        Addition=a+b;
        printf("Addition:%d\n",Addition);
    }
    else if(Select==2)
    {
        Subtraction=a-b;
        printf("Subtraction:%d\n",Subtraction);
    }
    else if(Select==3)
    {
        Multiplication=a*b;
        printf("Multiplication:%d\n",Multiplication);
    }
    else if(Select==4)
    {
        Division=a/b;
        printf("Division:%d\n",Division);
    }
    return 0;

}
