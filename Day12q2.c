#include <stdio.h>
int main(){
    int i;
    printf("enter i:");
    scanf("%d",&i);
    if(i<=0){
        printf(" no units no rupees");
    }
    else if (i<=100){
        printf("%d", 5*i);
    }
    else if(i<=200){
        printf("%d", (5*100)+(i-100)*7);
    }
    else if(i<=300){
        printf("%d",(5*100)+(100*7)+ (i-200)*10);
    }
    else if(i>300){
        printf("%d",(5*100)+(100*7)+ (i-200)*10+(i-300*12));
    }
    return 0;
}
