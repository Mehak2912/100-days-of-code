#include<stdio.h>

int main() {
    float a,b; //a,b are length and breadth of rectangle
    printf("enter a:");
    scanf("%f", &a);
    printf("enter b:");
    scanf("%f", &b);
    float perimeter;
    perimeter = 2*(a+b);
    printf("%f",perimeter);
    return 0;
}
