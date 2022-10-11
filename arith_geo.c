#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float $1(float a, float b, float* z, float* y, float* x, float* p, float* k, float* r, float* n){ //function
    float g;
    g = a + b;
    *z = a - b;
    *y = a * b;
    *x = a / b;
    *p = pow(a, b);
    *k = sqrt(a);
    *r = sqrt(b);
    *n = pow(b, a);
    return g;
}
void main(void){
    float z, y, a, b, p, k, r, x, o, n, pm; //addr variables
    printf("Escolha dois numeros {n1, n2 ∈ {R*}}\n:");
    scanf("%f %f",&a,&b);
    printf("sum:\t%f\n", $1(a, b, &z, &y, &x, &p, &k, &r, &n));
    printf("sub:\t%f\n", z);
    printf("prod:\t%f\n", y);
    printf("div:\t%f\n", x);
    printf("n1 power n2:\t%f\n", p);
    printf("n2 power n1:\t%f\n", n);
    printf("sqrt n1:\t%f\n", k);
    printf("sqrt n2:\t%f\n", r);
    return;
}
