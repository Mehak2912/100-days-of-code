#include <stdio.h>
int main(){
    float Cp,Sp,profit,loss;
    printf("enter Sp:");
    printf("enter cp:");
    scanf("%d%d",&Sp,&Cp );
    if(Sp>Cp){
        profit= Sp-Cp;
        float profitpercent = (profit/Cp)*100;
        printf("%f", profitpercent);
    }
    else if(Cp>Sp){
        loss= Cp-Sp;
        float losspercent = (loss/Cp)*100;
        printf("%f",losspercent);
    }
    else{
        printf("no profit no loss");
    }
    return 0;
}
