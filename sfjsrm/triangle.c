#include <stdio.h>
int main()
{
    int a, b, c, t;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b) {t = a; a = b; b = t;}
    if (a > c) {t = a; a = c; c = t;}
    if (b > c) {t = b; b = c; c = t;}
    if (a*a + b*b == c*c) {
        printf("yes\n");
    } else if (a+b>c) {
        printf("no\n");
    } else {
        printf("not a triangle\n");
    }
    return 0;
}
