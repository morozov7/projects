#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float $1(float a, float b, float* $3, float* $4, float* $5, float* $6, float* $7, float* $8, float* $9){

     float $2;
     $2 = a + b;
    *$3 = a - b;
    *$4 = a * b;
    *$5 = a / b;
    *$6 = pow(a, b);
    *$7 = pow(b, a);
    *$8 = sqrt(a);
    *$9 = sqrt(b);

    return $2;
}
float main(){

    float a, b, $3, $4, $5, $6, $7, $8, $9;
    printf("chose 2 numbers{n1, n2 ∈ {ℝ - 0}}\n:");
    scanf("%f %f",&a,&b);
    printf("sum:\t%f\n", $1(a, b, &$3, &$4, &$5, &$6, &$7, &$8, &$9));
    printf("sub:\t%f\n", $3);
    printf("prod:\t%f\n", $4);
    printf("div:\t%f\n", $5);
    printf("n1 power n2:\t%f\n", $6);
    printf("n2 power n1:\t%f\n", $7);
    printf("sqrt n1:\t%f\n", $8);
    printf("sqrt n2:\t%f\n", $9);  
        return 1;                                                                                                  // freak--
}
