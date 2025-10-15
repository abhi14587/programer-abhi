#include<stdio.h>
int main(){
    int a,b,c;
printf("enter first number:");
scanf("%d",&a);
printf("enter second number:");
scanf("%d",&b);
printf("enter third number:");
scanf("%d",&c);
if(a>b)
{
    printf("a is maximum");
}

else if(b<c)
{
    printf("c is maximum");
}
 else  if (b>c){
 printf("b is maximum");
 }
 else{
    printf("all are equal");
}

}