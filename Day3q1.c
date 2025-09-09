#include<stdio.h>

int main() {
    float celsius; 
    printf("enter celsius:");
    scanf("%f",&celsius);
    float fahrenheit;
    fahrenheit= (celsius*9/5)+32;
    printf("%f",fahrenheit);
    return 0;
}
