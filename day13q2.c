#print numbers from 0 to n(n is given by user)

#include <stdio.h>
int main(){
    int i=0;
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
return 0;    
}
