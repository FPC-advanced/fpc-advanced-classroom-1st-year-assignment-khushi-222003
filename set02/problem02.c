//Write a program to find if a triangle is scalene
/*
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
*/

#include<stdio.h>
int input_side(){
    int a;
    int b;
    int c;
    printf("Enter the sides\n");
    scanf("%d %d %d",a,b,c);
    return a;
}
 int check_scalene(int a,int b,int c){
if(a!=b&& a!=c && b!=c){
    printf("Its a scalene triangle\n");
    return 1;

}
else{
    printf("Its a not a scalene traingle\n");
}
return 0;
 }
 void output(int a, int b, int c, int isscalene){
    if(isscalene){
        printf("The triangle is scalene\n");
    }
    else{
        printf("The triangle is not scalene");
    }
 }
 int main(){
    int a,  b, c, isscalene;
    a=input();
    b=input();
    c=input();
    check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
 }