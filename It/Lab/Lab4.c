#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>
#define a  2.65
#define b  1.48
#define dx  -0.082

int main(){
    float x, k;
    printf("Input your num: ");
    scanf("%f", &x);
    printf("\n");
    for (x;x>0;x+=dx){
        k = sin(M_E*pow(x,2))/sqrt(a+b*pow(x,3));
        printf("The result %6.3f \t k = %f\n", x, k);  
    }
    return 0;
}