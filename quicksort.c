#include<stdio.h>
void swap(int *a,int *b)
{
      int temp=*a;
      *a=*b;
      *b=temp;
}

void partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low+1;
    int j=high;

    while(i<=j)
    {
        while(arr[i]<=pivot&&i<high)
        {
             i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(&arr[i],&arr[j]);
        }

        swap(&arr[low],&arr[j]);
    }
    return j;
}

void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
            int pi=partiion(arr[],low,high);
            quicksort(arr[],low,pi-1);
            quicksort(arr[],pi+1,high);

    }
        

}

int main()
{
    int n;
    int k,arr[60];

    printf("enter size of array");
    scanf("%d",&n);

    printf("enter data into the array");
    for(k=0;k<n;k++)
    {
        scanf("%d",&a);
    }

    quicksort(arr[],0,n-1);
    
    for(k=0;k<n;k++)
    {
        printf("\t%d",arr[k]);
    }
}