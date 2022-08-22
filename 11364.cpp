#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int t;

    scanf("%d", &t);

    while (t--)
    {
        int shop, result[20];
        scanf("%d", &shop);

        for (int i = 0; i < shop; i++)
        {
            scanf("%d", &result[i]);
        }

        int l = *min_element(result, result + shop);
        int r = *max_element(result, result + shop);
        printf("%d\n", 2 * (r - l));
    };

    return 0;
}
