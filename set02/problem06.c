 /*Write a program to reverse a string.

***Function Declarations***
```c
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
```*/

#include<stdio.h>
#include<stdio.h>
void input_string(char*a){
    printf("Enter the string");
    scanf("%s",a);
}
int str_reverse(char *str, char *rev_str){
     strrev(a);
}

void output(char a){
    printf("The reverse of string is %s",strrev);
}

int main(){
    char a[100];
    strrev(a);
    input_string(a);
    output(a);
    return 0;

}