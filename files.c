/*#include<stdio.h>
int main (){
    FILE *fptr;
    fptr=fopen("test.txt","r");
    char ch;
    fscanf(fptr, "%c",&ch);
    printf("charracter = %c\n", ch);

    fclose(fptr);
    return 0;

}*/
                 // w.a program to print odd number from 1 to n ?
#include<stdio.h>
int main (){
    FILE *fptr;
    fptr=fopen("odd.txt", "w");

    int n;
    printf("enter the n : ");
    scanf("%d",&n);

    for( int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            fprintf(fptr , "%d", i);
        }
    }
    fclose(fptr);
    return 0;
}