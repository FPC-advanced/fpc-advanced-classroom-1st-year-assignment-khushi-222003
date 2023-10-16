#include<stdio.h>
int max(int a, int b){
    (a>b)? a:b;
}
int input(){
    int a,b,c,num;
    printf("Enter the number\n");
    scanf("%d",&num);
    return num;

}
void compare(int a, int b, int c, int *largest){
    *largest= max(max(a,b),c);
}
void output(int a, int b, int c, int largest){
    printf("The largest among %d,%d,%d is %d",a,b,c,largest);

}
int main(){
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    compare(a,b,c,&largest);
    output(a,b,c,largest);
    return 0;
}