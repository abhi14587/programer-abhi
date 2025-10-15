             //W.A.P TO PRINT CHARATER ARRAY
/*#include<stdio.h>
int main ()
{
    int i;
    char a[10]={'a','b','c','d','e'};
    printf("character array is :");
    for(i=0;i<5;i++)
    {
        printf("index is %d:%c\n",i,a[i]);
    }
    return 0;
}             */

//W.A.P TO PRINT CHARATER ARRAY ACCEPT CHARCTER FROM USER AT RUN TIME /?????

#include<stdio.h>
int main ()
{
    int i;
    char a[5];
    printf(" Enter the character array is :");
    for(i=0;i<5;i++)
    {
        scanf("%c",&a[i]);
    }
        printf("character array is :");
        for(i=0;i<5;i++)
        {
        printf("index is %d:%c\n",a[i]);
        }

    return 0;
}             