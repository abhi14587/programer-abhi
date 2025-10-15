/*#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    printf("enter the name :");
    gets(name);
    puts("your name is :");
    puts(name);
    return 0;
}*/
                        //W.A. TO PRINT A UPPER CASE AND LOWER CASE IN INPUT ?????????
/*
#include<stdio.h>
#include<string.h>
int main ()
{
    char name[50];
    printf("enter your name:");
    gets(name);
    strupr("name");
    printf("the upper case :");
    return 0;
    }*/

                    // w.a.p to check its is palindrome or not ?????

/*#include<stdio.h>
#include<string.h>
int main ()
{
char s1[1000],s2[1000];
printf("enter the string:");
gets (s1);
strcpy(s2,s1);
strrev(s2);
if(!strcmp(s1,s2))
       printf("string is palindrome ");
else
       printf("string is not palindrome ");

return 0;
}*/
                     //W.A.P TO PRINT 
/*#include<stdio.h>
int main ()
{
    char s[1000];
    int i,n,c=0;
    printf("enter the string :");
    gets(s);
    n=strlen(s);
    for(i=0;i<n/2;i++)
    {
        if(s[i]==s[n-i-1])
        c++;
    }
    if(c==i)
    printf("string is palindrome ");
    else
    printf("string is not is palindrome");
    return 0;
}*/

                        // w. a. p to print matrix multiplication 
#include<stdio.h>
int main ()
{
    int a[10][10],b[10][10],mul[10][10],r,c,i,j,m,n,k;
    printf("Enter the row and column size of A : ");
    scanf("%d%d",&r,&c);
    printf("Enter the row and column size of B : ");
    scanf("%d%d",&m,&n);
    printf("enter the element into A :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the element into B:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(c==!m)
    {
        printf("metrix multiplication not possible");
    }
    else
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<n;j++)
            {
                 mul[i][j]=0;
                for(k=0;k<m;k++)
                {
                    mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
                }
            }
        }
    }
    printf("matrix multiplication is :\t");
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d",mul[i][j]);
        }

    }
    return 0;
}