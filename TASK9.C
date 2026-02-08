#include<stdio.h>
int main(){
    double number;
    printf("Enter number: ");
    scanf("%lf", &dnum);
    printf("Default: %lf\n2 Decimal: %.2lf\n5 Decimal: %.5lf\n", number, number, number);
    return 0;
}
