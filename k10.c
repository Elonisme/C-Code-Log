#include <stdio.h>
#include <math.h>

int main(){
    float func1 = pow(8.0, 1.0/3.0);
    float func2 = fabs((double) -3/4);
    float func3 = fmod(4.3, 2.1);
    int func4 = sqrt(sqrt(16));
    printf("%f\n", func1);
    printf("%f\n", func2);
    printf("%f\n", func3);
    printf("%d\n", func4);
    return 0;
}