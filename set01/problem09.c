#include<stdio.h>
#include<math.h>
    float input(){
        float num;
        printf("Enter the number");
        scanf("%f",&num);
        return num;
    }
    float mysqrt(float a){
        float pguess=a/2;
        float next=(pguess+a/pguess)/2;
        while(fabs(next*next-a)<0.000001){
            pguess=next;
            next=(pguess+a/pguess)/2;
            return next;
        }
        

    }
    void output(float a,float root){
        printf("The squareroot of %f is %f\n",a,root);

    }
    int main(){
        float number=input();
        float result=
    }
    

    
