#include <stdio.h>
int main()
{
    int n;
    float result;
    scanf("%d", &n);
    if (95 * n > 300)
    {
        result = 95 * n * 0.85;
    }
    else {
        result = 95 * n;
    }
    printf("%.2f\n", result);
    return 0;
}
