/*Write a program to find the area of a triangle.

***Function Declarations***
```c
typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Traingle *t);
void output(Triangle t);
```*/
#include<stdio.h>
typedef struct_triangle{
	float base, altitude, area;
}Triangle;

Triangle input_triangle(){
	Triangle t;
	printf("Enter the base\n");
	scanf("%f",&t.base)
	printf("Enter the altitude\n");
	scanf("%f",&t.altitude);

	return t;


}
void find_area(triangle *t){
	float area;
	t->area = t->base* t->altitude*0.5;
}

void output(triangle t){
	printf("The area is %f", t.area);
}

int main(){
	Triangle t;
	t=input_triangle();
	find_area(&t);
	output(t);
	return 0;

}