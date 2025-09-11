#include<stdio.h>

int main() {
    int num;
    printf("enter num:");
    scanf("%d", &num);
    if(num>0){
        printf("this is positive");
    }
    else if(num==0){
        printf("this is zero");
    } 
    else if(num<0){
        printf("this is negative");
    }
    else{
        printf("not valid");
    }   

    return 0;
}
