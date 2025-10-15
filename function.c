          //W.AP. TO FIND SUM OF TWO NUMBER BY USUNG WITHARGUMENT AND NO RETUN TYPE ???
/*#include<stdio.h>
void add(int,int);
int main() 
{
    int a, b;
    printf("Enter two value :");
    scanf("%d%d",&a,&b);
    add(a,b);
}   
void add(int a,int b)
{
  int sum;
  sum=a+b;
  printf("sum is :%d",sum);

}*/

             //W.A.P TO add degit of a NUMBER BY FUNCTION ??????
/*#include<stdio.h>
  void add(int,int);
int main()
{
  int a,b;
  printf("ENTER two values:");
  scanf("%d%d",&a,&b);
  add(a,b);

}
void add(int a, int b)
{
  int sum ;
  sum=a+b;
  printf("sum of degit is :%d",sum);
}*/

#include<stdio.h> 
 extern int a = 10;
int  display()
{
  printf("value is : %d\n",a);
  ++a ;
}
int main (){
  display ();
  display ();
  display ();

return 0;
}