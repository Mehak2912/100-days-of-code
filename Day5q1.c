#include<stdio.h>

int main(){
    int SI,CI,P,R,T;
    printf("enter P:");
    printf("enter R:");
    printf("enter T:");
    scanf("%d%d%d",&P,&R,&T);
    SI= (P*R*T)/100;
    printf("%d", SI);
    CI= P* (pow((1+R/100),T))-P;
    printf("%d", CI);
 return 0;   
}
