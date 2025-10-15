//to calculate the area of a circle
//circle area is {pi*r*r}  pi= 3.14

#include<stdio.h>
int main(){ 
    float radius;
    printf("enter radius");
    scanf("%f", &radius);

    printf("area is :%f",3.14 *radius *radius);
    return 0;
}    


//  22  //area of a square....  ////?

#include <stdio.h>
int main (){
    int side;
    printf("enter side ");
    scanf("%d", &side);    //for decimal valu %f is uesd

    printf("area is : %d", side * side);
    return 0;
}