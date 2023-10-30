/*Write a program to find the triangle with smallest area in n given triangles.

***Function Declarations***
```c
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n();

Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);
```
*/
#include<stdio.h>
typedef struct _triangle{
	float base, altitude, area;
}Triange;
Triangle input_n(){
	int n;
	printf("Enter the no.of triangle\n");
	scanf("%d",&n);


}

void input_n_triangles(int n, Triangle t[n]){
	
}