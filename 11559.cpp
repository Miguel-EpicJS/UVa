#include <iostream>

using namespace std;

int main()
{

    int n, b, h, w;

    while (cin >> n >> b >> h >> w)
    {
        int minCost = b + 1;
        for (int H = 0; H < h; H++)
        {
            int p;
            cin >> p;
            for (int W = 0; W < w; W++)
            {
                int a;
                cin >> a;
                if (a >= n && p * n <= minCost)
                {
                    minCost = p * n;
                }
            }
        }
        if (minCost <= b)
        {
            cout << minCost << "\n";
        }
        else
        {
            cout << "stay home"
                 << "\n";
        }
    }

    return 0;
}