             //2D ARRAY ----> IS ALSO KNOWN AS ARRAY OF ARRAY.

            //W.A.P TO READ 2D ARRAY AND DISPLAY IT  ??????
/*#include <stdio.h>
int main()
{
    int a[10][10],i,j,m,n;
    printf("Enetr the size of matrix :\n");
    scanf("%d%d",&m,&n);
    printf("Enter the element into matrix:");
    for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("Index is [%d][%d]",i,j);
        scanf("%d",&a[i][j]);

    }
}
printf("Enter the array  into matrix:\n");
    for(i=0;i<m;i++)
{
    printf("\n");
    for(j=0;j<n;j++)
    {
        printf("%d\t",a[i][j]);
    
    }
}

return 0;
}*/

          //W.A.P TO PERFORME ADDITION,sub product using 2d arrayand display it ???????
#include<stdio.h>
int main()
{
  int a[3][3],b[3][3],sum[3][3],sub[3][3],prod[3][3],i,j,;
  printf("Enter the size of aaray:");
  scanf("%d%d%d",&sum,&sub,&prod);
  printf("Enter the element into matrix a:\n");
  for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("Index is [%d][%d]",i,j);
        scanf("%d",&a[i][j]);
    }
    }
    printf("Enter the element into matrix b:\n");
    for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("Index is [%d][%d]",i,j);
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        sum[i][j]=a[i][j]+b[i][j];
    }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        sub[i][j]=a[i][j]-b[i][j];
    }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        prod[i][j]=a[i][j]*b[i][j];
    }
  }
  printf("sum matrix is :");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        sum[i][j]=a[i][j]+b[i][j];
    }
  }
  printf("sub matrix is :");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        sub[i][j]=a[i][j]-b[i][j];
    }
  }
printf("prod matrix is :");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        prod[i][j]=a[i][j]*b[i][j];
    }
  }
  

}