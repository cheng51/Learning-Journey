#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main()
// {
//   char s[] = "hi!";
//   char *t = malloc(strlen(s) + 1);
//   for (int i = 0, N = strlen(s); i <= N; i++)
//   {
//     t[i] = s[i];
// }
// t[0] = toupper(t[0]);
//   printf("%s\n", s);
//   printf("%s\n", t);

//   free(t);

//   return 0;
// }

int main()
{
    char s[] = "hi!";
    char *t = malloc(strlen(s) + 1);

    strcpy(t, s);
    t[0] = toupper(s[0]);

    printf("%s\n", s);
    printf("%s\n", t);

    free(t);

    return 0;
}