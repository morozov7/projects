#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float $1(float a, float b, float* z, float* y, float* x, float* p, float* k, float* r, float* n){ 
    
    float g;
    g = a + b;
    *z = a - b;
    *y = a * b;
    *x = a / b;
    *p = pow(a, b);
    *n = pow(b, a);
    *k = sqrt(a);
    *r = sqrt(b);
    
    return g;
}
void main(){
    
    float z, y, a, b, p, k, r, x, o, n, pm; 
    printf("chose 2 numbers{n1, n2 ∈ {R*}}\n:");
    scanf("%f %f",&a,&b);
    printf("sum:\t%f\n", $1(a, b, &z, &y, &x, &p, &k, &r, &n));
    printf("sub:\t%f\n", z);
    printf("prod:\t%f\n", y);
    printf("div:\t%f\n", x);
    printf("n1 power n2:\t%f\n", p);
    printf("n2 power n1:\t%f\n", n);
    printf("sqrt n1:\t%f\n", k);
    printf("sqrt n2:\t%f\n", r);                                                                                                    // freak--
}
