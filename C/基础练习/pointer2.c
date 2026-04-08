#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[20] = "david";
    char *t = malloc(strlen(s) + 1);
    if (t == NULL) // 判断malloc是否成功
    {
        return 1;
    }
    //复制字符串
    // for (int i = 0, n = strlen(s); i < n; i++)
    // {
    //     t[i] = s[i];
    // }
    strcpy(t, s);

    t[0] = toupper(t[0]);

    printf("s=%s\n", s);
    printf("t=%s\n", t);

    free(t);
}