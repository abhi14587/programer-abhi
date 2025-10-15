#include <stdio.h>
// int main () {   
// for(int i=1 ; i<=100 ; i= i+1 ) {
//         printf("%d \n " , i );
//     }
//     return 0 ;
// }

void printnumber(int arr[], int n );
int main() {
   int arr[] ={1 ,2 ,3 , 4, 5 , 6} ;
   printNumber(arr, 6);
   return 0;
}
//output
void printNumbers(int arr[] , int n) {
     for(int i=0; i<n; i++ ) {
        ptintf("%d \t", arr[i]) ;
     }
         printf("\n");
     } 
     
     //w.a.p. to check fail or pass   ?

/*#include <stdio.h>

int main() {
    int marks ;
    printf("enter number (0-100) : ");
    scanf("%d", &marks );

    if (marks >= 30 ) {
    printf("pass \n ");
    }
 else { 
    printf("fail \n ");
 }
    return 0 ;
}*/