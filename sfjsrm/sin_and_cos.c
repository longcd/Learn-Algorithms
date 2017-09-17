#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("%f %f\n", sin(n*(atan(1.0)*4)/180), cos(n*(atan(1.0)*4)/180));
    return 0;
}
