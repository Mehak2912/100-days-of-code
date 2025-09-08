#include<stdio.h>

int main() {
    float r; //r is radius of circle
    printf("enter r:");
    scanf("%f", &r);
    float area;
    float circumference;
    area = 3.14*r*r;
    circumference=2*3.14*r;
    printf("%f\n""%f\n",area, circumference);
    return 0;
}
