/*Write a program to find the smallest of three fractions

***Function Declarations***
```c
typedef struct {
    int num, den;
} Fraction;
```*/

#include<stdio.h>
typedef struct {
    int num, den;
} Fraction;

Fraction inputFraction(){
    Fraction f;
    printf("Enter the fraction:");
    scanf("%d,%d",&f.num,&f.den);
    return f;
}

void InputFractionArray(int n, Fraction fraction[]){
    for (int i=0; i<n, i++){
        fraction[i]=inputFraction();
    
    }
}
Fraction findSmallest(Fraction fractions[], int n) {
    Fraction smallest = fractions[0];

    for (int i = 1; i < n; ++i) {
        if ((fractions[i].num * smallest.den) < (smallest.num * fractions[i].den)) {
            smallest = fractions[i];
        }
    }

    return smallest;
}
void outputFraction(Fraction fraction) {
    printf("\nThe smallest fraction is: %d/%d\n", fraction.num, fraction.den);
}