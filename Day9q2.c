#include <stdio.h>
int main() {
    printf("enter percentage:");
    int P;
    scanf("%d", &P);
    if(P>=90 && P<=100){
        printf("Grade A");
    }
    else if(P>=80 && P<=89){
        printf("Grade B");
    }
    else if(P>=70 && P<=79){
        printf("Grade C");
    }
    else if(P>=60 && P<=69){
        printf("Grade D");
    }
    else{
        printf("Grade F");
    }

    return 0;
}