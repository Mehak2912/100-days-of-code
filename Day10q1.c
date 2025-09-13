#include <stdio.h>
int main() {
    printf("enter a,b,c:"); //a,b,c are side lengths of triangle
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if(a==b==c){
        printf("this is equilateral triangle");
    }
    else if(a==b || b==c || a==c){
        printf("this is isosceles triangle");
    }
    else{
        printf("this is scalene triangle");
    }

    return 0;
}
