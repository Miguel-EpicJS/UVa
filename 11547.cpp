#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

int main()
{

    int t, n;

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);

        string s;

        s = to_string(((((((n * 567) / 9) + 7492) * 235) / 47) - 498));
        s = s[s.length() - 2];

        printf("%s\n", s.c_str());
    }

    return 0;
}