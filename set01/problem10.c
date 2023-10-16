#include<stdio.h>
#include<string.h>
void input(char s1[] ,char s2[]){
    
    printf("Enter the first string:\n");
    scanf("%s",s1);
    printf("Enter the second string:\n");
    scanf("%s",s2);
}
 void compare(char s1[], char s2[]){
    strcmp(s1,s2);
    
    


}
void output(char s1[],char s2[],int result){
   if (result<0){
    printf("%s is greater than %s",s1,s2);
   }
   else if(result>0){
    printf("%s is greater than %s",s1,s2);

   }
   else {
    printf("%s equals to %s",s1,s2);
   }
}
int main(){
    char s1[100];
    char s2[100];
    int result;
    input(s1,s2);
    compare(s1,s2);
    output(s1,s2,result);
    return 0;

}
