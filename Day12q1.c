#include <stdio.h>
int main(){
    int i;
    printf("enter i:");
    scanf("%d",&i);
    if(i<=0){
        printf(" no fine");
    }
    else if (i<=5){
        printf("%d", 2*i);
    }
    else if(i<=10){
        printf("%d", (5*2)+(i-5)*4);
    }
    else if(i<=30){
        printf("%d",(5*2)+(5*4)+ (i-10)*6);
    }
    else if(i>30){
        printf("membership cancelled");
    }
    return 0;
}
