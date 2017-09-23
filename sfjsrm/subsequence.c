#include <stdio.h>
int main()
{
    freopen("data.in", "r", stdin);
    int n, m, kase = 1;
    while(scanf("%d%d", &n, &m) == 2) {
        double sum = 0;
        if (n ==0 && m == 0) break;
	for (int i = n; i <= m; i++) {
            sum = sum + (1.0 / i / i);
        }
	printf("Case %d: %.5f\n", kase, sum);
	kase++;
    }
    return 0;
}
