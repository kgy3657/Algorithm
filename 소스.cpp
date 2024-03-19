#include <stdio.h>
#define LEN_INPUT 11

int main(void)
{
    char s1[LEN_INPUT];
    int a;
    int i;
    scanf_s("%s %d", s1, &a);
    for (i = 0; i< LEN_INPUT; i++)
    {
        if (s1[i] == 0)
        {
            break;
        }
    }
    while (a == 0)
    {
        if (a > 0)
        {
            a--;
            printf("%c", s1[i]);
        }
    }
    return 0;
}