#include<stdio.h>
int input(){
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
}
int add(int a, int b){
    sum=a+b;
    return sum;
}
void output(int a,int b,int sum){
    printf("The sum of two number is %d", sum);
}
int main(){
    int a , int b, int sum;
    a=input();
    b=input();
    sum=add(a,b);
    output(sum);
}