#include<stdio.h>

int main() {
    int a,b;
    printf("enter a:");
    scanf("%d", &a);
    printf("enter b:");
    scanf("%d",&b);
    int sum,difference,product,quotient;
    sum=a+b;
    difference=a-b;
    product=a*b;
    quotient=a/b;
    printf("%d\n""%d\n""%d\n%d\n",sum, difference,product,quotient);
    return 0;
}
