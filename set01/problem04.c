#include<stdio.h>
int input(){
    int *num1;
    int *num2;
    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the second number");
    scanf("%d",&num2);
}
void add(int num1, int num2, int *sum){
    *sum=num1+num2;
}
void output(int sum){
    printf("The sum is %d",sum);
}
int main(){
    int a,b,result;
    input(&a,&b);
    add(a,b,&result);
    output(result);
    return 0;
}
   
