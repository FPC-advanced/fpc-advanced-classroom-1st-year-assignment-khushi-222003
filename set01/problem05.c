#include<stdio.h>
int input(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
}
int compare(int a, int b, int c){
    int largest;
    if(a>b&&a>c){
        largest=a;
    }
    else if(b>a&&b>c){
        largest=b;
    }
    else{
        largest c;
    }
    return largest;
}
int output(int a, int b, int c, int largest){
    printf("The largest of number among %d,%d and %d is %d",a,b,c,largest);
}
int main(){
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    largest=compare(a,b,c);
    output(a,b,c,largest);
    return 0;
}