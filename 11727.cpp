#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{

    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int v[3];

        scanf("%d %d %d", &v[0], &v[1], &v[2]);

        int s = sizeof(v) / sizeof(v[0]);

        sort(v, v + s);

        printf("Case %d: %d\n", i, v[1]);
    }

    return 0;
}