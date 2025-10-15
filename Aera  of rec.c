#include<stdio.h>
int main () {
    int l, b;
    printf("enter the rectangle leanth and breath " );
    scanf("%d%d", &l , &b);
    int area = (l * b) ;
    int perimeter = (2 * (l + b));

    printf("area of rectangle is %d \n" ,area);
    printf("perimeter of rectangle is %d \n" , perimeter);
    return 0;
}