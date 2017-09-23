#include <stdio.h>
#include <stdbool.h>
int main()
{
    freopen("data.in", "r", stdin);
    int kase=1, i, a, b, c;
    bool flag;
    while(scanf("%d%d%d", &a, &b, &c) == 3) {
	flag = false;
    	for (i = 10; i <= 100; i++) {
            if (i%3==a && i%5==b && i%7==c) {
	    	printf("Case %d: %d\n", kase, i);
	    	flag = true;
	    	break;
	    }
    	}
   	if (!flag) {
            printf("Case %d: No answer\n", kase);
    	}
	kase++;
    }
    return 0;
}
