/*#include<stdio.h>
int main()
{
    int a[100],n,i,j,temp;
    printf("Enter the size of array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)                //shorting
    {
       for(j=i+1;j<n;j++)
       {
        if(a[i]>a[j])               //swapping
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
       }
    }



   
}*/
                      
                    //W.A.P TO MERGE THE TWO ARRAY ELEMENT  ?????
                    
/*#include<stdio.h>
int main()
{
    int a[5],b[5],c[10],i;
    printf("enter the elment in A array: \t");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element in B array: \t");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)
    {
       c[i]=a[i];
       c[i+5]=b[i];
    }
    printf("resultant array of c is :\t");
    for(i=0;i<10;i++)
    {
        printf("%d\t",c[i]);
    }
    return 0;
}*/
                 //W.A.P TO INSERTION OF ARRRAY ELEMENT ????? 
#include<stdio.h>
int main () 
{
    int a[10],i,value,pos,n;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    printf("enter  the positin whrer u want to insert in array :\t");
    scanf("%d",&pos);
    printf("enter array elemnet :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the value u want to insert :\t");
    scanf("%d",&value);
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=value;
    printf("Updated array after insertion array is :\t");
    for(i=0;i<=5;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}           
                             //W.A.P TO DELET AN ELEMENT IN THE ARRAY//???
 /*#include<stdio.h>
 int main ()
 {
    int a[10],i,pos,n;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    printf("enter  the positin whrer u want to delete in array :\t");
    scanf("%d",&pos);
    printf("enter array elemnet :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    printf("updated array after deletion is : ");
    for(i=0;i<n-1;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
 }  */                     