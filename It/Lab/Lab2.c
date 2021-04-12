#include<stdio.h>
#include <math.h> 

int main(){
    float  i, w, L, R, Um, fi, t, r;
    int g = 2;
    w = 700;
    L = 0.1;
    R = 32.5;
    Um = 320.4;
    fi = atan(L*w/R);
    printf("\nEnter your num: ");
    scanf("%f", &t);
    i = Um/(R*sqrt(pow(w*L/R, 2)+1))*sin(w*t-fi);
    printf("%f", i);
    return 0;
}