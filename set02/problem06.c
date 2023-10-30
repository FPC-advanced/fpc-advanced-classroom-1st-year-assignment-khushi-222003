 /*Write a program to reverse a string.

***Function Declarations***
```c
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
```*/

#include<stdio.h>
#include<string.h>
void input_string(char*a){
    printf("Enter the string\n");
    scanf("%s",a);
}
int str_reverse(char *str, char *rev_str){
     int length= strlen(str);
     for (int i=0; i<length/2; i++){
         char ch=str[i];
        str[i]=str[length-1-i];
        str[length-1-i]=ch;
     }
     
}

void output(char *a ,char *reverse_a){
    printf("The reverse of string is %s\n",reverse_a);
}

int main(){
    char a[100];
    char rev_str[100];
     input_string(a);
    str_reverse(a, rev_str);
   
    output(a, rev_str);
    return 0;

}