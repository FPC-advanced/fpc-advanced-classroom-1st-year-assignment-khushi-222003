/* Write a program to find the distance between two points*/

/*1.  Write a program to find the distance between two points.

***Function Declarations***

```c
struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);
```*/

#include <stdio.h>
#include <math.h>


struct _points{
    float x;
    float y;
};
typedef struct _point Point;
Point input_point(){
    Point p;
    printf("Enter the first point:\n");
    scanf("%d",&p.x);
    printf("Enter the second point:\n");
    scanf("%d",&p.y);
    return p;
}

void dist(Point a, Point b, float *res){
    *res=sqrt(pow((b.x-a.x),2)+ pow((b.y-a.y),2));
}
void output(Point a, Point b, float res){
    printf("The distance between point %f,%f and %f,%f is %f",a.x,a.y,b.x,b.y,res);
}
int main(){
    Point point1,point2;
    float distance;
    p=input_point();
   result= dist(point1,point2,&distance);
    output(point1,point2,&distance);
    return 0;


}