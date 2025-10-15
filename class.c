//arithematic problem....?

// #include<stdio.h>
// int main (){
//     int a, b, add, sub,mul, div,mod;
//     printf("enter two value ");
//     scanf("%d%d", &a,&b);
//     add=a+b;
//     sub=a-b;
//     mul=a*b;
//     div=a/b;
//     mod=a%b;
//     printf("add is : %d\n",add);
//     printf("sub is : %d\n",sub);
//     printf("mul is : %d\n",mul);
//     printf("div is : %d\n",div);
//     printf("mod is : %d\n",mod);
//     return 0;
// }

//unary operator ...?    (+ , -, ++ , --  )
/*#include <stdio.h>
int main (){
    int a = 10;
    a=a+1;
    printf("value is : %d\n",a--);
    printf("%d\n",a);

    return 0;

}*/

//relational opretor...?
/*#include<stdio.h>
int main(){
    int a=10 ,b=20;
    printf("a<=b  is %d\n", a<b);
    printf("a<b is %d\n", a<b);
    printf("a==b is %d\n",a==b);
    printf("a!=b is %d\n",a!=b);
    return 0;
}
*/

//logical operator...?
/*#include <stdio.h>
int main(){
    int a=12,b=20,c=14,d=25;
    printf("a<b && b>c is : %d",a<b && b>c);
    return 0; 
}*/
//  (<<=) isme multiple karega    (>>=)isme divide karega 


// #include <stdio.h>
// int main(){
//     int age;
//     printf("Enter your age : ");
//     scanf("%d", &age);
//     age>=18?printf("eligible for vote"):printf("not eligible for vote");
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     char c[100];
//     printf("enter string");
//     scanf("%[^\n]%*c",c);
//     printf("%s",c);
//     return 0;

// }
//                            <<<<<<<UNIT 2 PRACTICE QUESTION   ....!!!!!>>


//      >>if question   ...?

// #include <stdio.h>
// int main(){
//     int a;
//     printf("enter a value :");
//     scanf("%d\n",&a);
//     if(a>0){    
//     printf("postive number : %d\n",a);
//     printf("piyush");
//     }
//     printf(" i love u");
// }

// if else question >>>!!!!?>>

// #include <stdio.h>
// int main (){
//     int a;
//     printf("enter a value :");
//     scanf("%d\n",&a);

//      if(a>0) {    
//     printf("postive number : %d\n",a);
//     printf("piyush");
//     }
// else  
//     {  
//     printf("negative number :%d\n",a);
// }
// }

//  switch  [break statement] >>>>>!!!!>>>>


//22/10/24

// W A PROGRAM TO PORINT {1 TO N }PRIME NUMBER ?????

#include<stdio.h>
int main (){
     int i,j,n,count;
     printf("enter the number of n:");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
        count =0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
            count=count+1;
            }
        }
    if(count==2)
    printf("%d\t",i);
}
}
