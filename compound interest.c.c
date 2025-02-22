//Calculation of compound interest
/*
ci= compound interest
p= principal
r=interest rate
n= number of compounding a year
t= totalnumber of years
*/
#include <stdio.h>
#include <math.h>
int main() {
    float p, r, t, ci;
    int n; 
    printf("p:");
    scanf("%f", &p);
    printf("r(%%): ");
    scanf("%f", &r);
    printf("t:");
    scanf("%f", &t);
    printf("n:");
    scanf("%d", &n);
    ci= p * pow((1 + r/ (100 * n)), (n * t));
    printf("ci: Ksh %.2f\n", ci);
    return 0;
}