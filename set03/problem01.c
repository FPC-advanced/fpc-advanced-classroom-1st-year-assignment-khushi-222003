 /*Write a program to find the distance between 2 points

***Function Declarations***
```c
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);*/
#include<stdio.h>
#include<math.h>
float input(float *x1, float *y1, float *x2, float *y2){
    printf("Enter the first cordinates\n", (x1,y1));
    scanf("%f,%f",x1, y1);
    printf("Enter the second cordinates\n", (x2,y2));
    scanf("%f,%f",x2, y2);
}

float find_distance(float x1 ,float y1, float x2,  float y2){

  float distance;
  distance=sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  return distance;

}

void output(float x1, float y1, float x2, float y2, float distance){
  printf("The distance between (%f,%f)and (%f,%f)is %f\n",x1,y1,x2,y2,distance);
}
int main(){
  float a,b,c,d,distance;
  input(&a ,&b, &c, &d);
  distance=find_distance(a,b,c,d);
  output(a,b,c,d,distance);
return 0;
}