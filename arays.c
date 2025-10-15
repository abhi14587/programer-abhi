/*#include <stdio.h>
int main () {
    float price [3];
    printf("enter 3 price : ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);
    
    printf("total price 1 : %f\n", price[0]+ (0.18*price[0]));
    printf("total price 2 : %f\n", price[1]+ (0.18*price[1]));
    printf("total price 3 : %f\n", price[2]+ (0.18*price[2]));
    return 0;

}*/

// for("int i=0; i<n ; i++");
// printf("*");


// for("int j=0 ; j<n ; j++")

// return 0;
// }

#include<stdio.h>
int main()
{
  int a[3][3],tran[3][3],i,j;
  printf("Enter the element into matrix a:\n");
  for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        tran[i][j]=a[j][i];
    }
    }
    printf("tran matrix is :\n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t",tran[i][j]);
      }
    }
    return 0;
}