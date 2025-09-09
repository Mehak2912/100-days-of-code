#include<stdio.h>

int main() {
    int x,y,z;
    printf("enter two numbers:");
    scanf("%d%d",&x,&y);
    z=x;
    x=y;
    y=z;
    printf("the swapped values of x and y are %d and %d respectively", x,y);
    return 0;
}
