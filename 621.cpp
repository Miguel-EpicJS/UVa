#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{

    int n;

    scanf("%d", &n);

    while (n--)
    {
        char s[2000];
        scanf("%s", s);

        if (strcmp(s, "1") == 0 || strcmp(s, "4") == 0 || strcmp(s, "78") == 0)
        {
            puts("+");
        }
        else
        {
            int l = strlen(s);

            if (s[l - 1] == '5' && s[l - 2] == '3')
            {
                puts("-");
            }
            else if (s[0] == '1' && s[1] == '9' && s[2] == '0')
            {
                puts("?");
            }
            else if (s[0] == '9' && s[l - 1] == '4')
            {
                puts("*");
            }
            else
            {
                puts("+");
            }
        }
    }

    return 0;
}