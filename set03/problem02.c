/* Write a program to find whether the given 3 points form a triangle

***Function Declarations***
```c
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
```*/

#include<stdio.h>
void input(float *x1,float*y1, float *x2, float*y2, float *x3, float *y3){
    printf("Enter the first points\n", (x1,y1));
    scanf("%f,%f",x1,y1);
    printf("ENter the second points\n");
    scanf("%f,%f", x2,y2);
    printf("Enter the third points\n");
    scanf("%f, %f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3){
    if((x1!=x2|| y1!=y2)&&(x1!=x3||y1!=y3)&&(x2!=x3||y2!=y3)){
        return 1;
    }
    return -1;

}
void output(float x1, float y1, float x2, float y2,float x3, float y3, float result){
    if(result>0){
        printf("The points %f,%f,%f,%f,%f,%f forms a triangle", x1,y1,x2,y2,x3,y3);
    }
    else{
        printf("The points %f,%f,%f,%f,%f,%f do not form a triangle", x1,y1,x2,y2,x3,y3);
    }
}
int main(){
    float x1,y1,x2,y2,x3,y3,result;
    input(&x1, &y1, &x2, &y2, &x3, &y3);
    result=is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
    return 0;
}