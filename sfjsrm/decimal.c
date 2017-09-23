#include <stdio.h>
int main()
{
    freopen("data.in", "r", stdin);
    int a, b, c, kase=1;
    while(scanf("%d%d%d", &a, &b, &c) == 3) {
        if (a==0 && b==0 && c==0) break;
	printf("Case %d: %.*lf\n", kase, c, (float)a/b);
    } 
    return 0;
}
