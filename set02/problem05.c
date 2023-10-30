/*05.  Write a program to find GCD _(HCF)_ of two numbers.

***Function Declarations***
```c
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
```*/
#include<stdio.h>
int input(){
int n;
printf("Enter the  number:\n");
scanf("%d",&n);
}
int find_gcd(int a,int b,int gcd){
    for(int i=1; i<=a, i<=b; i++){
        if(a%i==0 && b%i==0){
            gcd=i;
            printf("The GCD is %d",&gcd);
        }
        
    }
}
void output(int a,int b,int gcd){
    printf("The GCD of given numbers is %d", &gcd);
}
int main(){
    int a,b,n, gcd;
    n=input();
    find_gcd(a,b,gcd);
    output(a,b,gcd);
    return 0;
    }