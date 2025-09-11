#include<stdio.h>

int main(){
    int time,seconds,hours,minutes;
    printf("enter time:");
    scanf("%d",&time);
    hours = time/3600;
    minutes=( time % 3600)/60;
    seconds= time % 60;
    printf("%d:%d:%d \n", hours,minutes,seconds);
  
 return 0;   
}
