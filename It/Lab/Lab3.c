#include<stdio.h>
#include<math.h>
#define a 4.735
#define b 8.216
int main() {
    float i, m, f;
    int s;
    printf("Print the num: ");
    scanf("%f", &i);
    if (a>=i)
    {
        f = fabs(a - exp(i-0.5));
        m = sqrt(f*b);
        printf("Output is %f\n",m);
    }else if((a+b)/2<i && i<=b)
    {
        m = log(pow(b,a));
        printf("Output is %f\n",m);
    }
    else
    {
        printf("Not in range\n");
    }
    
    return 0;
}