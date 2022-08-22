#include <cstdio>

using namespace std;

int main()
{

    int B, N;

    while (scanf("%d %d", &B, &N))
    {
        if (B == 0 && N == 0)
        {
            break;
        }

        int reserves[22] = {0};
        for (int i = 1; i <= B; i++)
        {
            scanf("%d", &reserves[i]);
        }
        while (N--)
        {
            int debtor, creditor, debenture;
            scanf("%d %d %d", &debtor, &creditor, &debenture);

            reserves[debtor] -= debenture;
            reserves[creditor] += debenture;
        }
        int count = 0;
        for (int i = 0; i < 22; i++)
        {
            if (reserves[i] < 0)
            {
                count = 1;
            }
        }
        if (count == 1)
        {
            printf("N\n");
        }
        else
        {
            printf("S\n");
        }
    };

    return 0;
}