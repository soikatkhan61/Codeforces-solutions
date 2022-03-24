#include<stdio.h>
int cnt[105];
int n;

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        int a;
        scanf("%d", &a);
        cnt[a]++;
    }
    int ans = 0;
    for (int i = 1; i <= 100; ++i)
    {
        if (ans < cnt[i])
        {
            ans = cnt[i];
        }
    }
    printf("%d\n", ans);
}
