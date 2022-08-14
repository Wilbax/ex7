#include <stdio.h>

int main(){
    int distance = 100;
    float power = 3.234f;
    double super_power = 3423423.4234;
//    char initial = "A";
    float* addr = &power;


//    printf("%d\n", distance);
//    printf("%lf\n", power);
//    printf("%f\n", super_power);
//    printf("%s", initial);
    printf("%p", addr);
}
