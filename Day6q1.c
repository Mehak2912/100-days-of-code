#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    printf("n:",n);
    if(n%2==0){
        printf("Even");
    }
    else {
        printf("Odd");
    }
}
