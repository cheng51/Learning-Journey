#include <stdio.h>

int main()
{
    char c;
    c = 97;
    printf("ASCII值=%d表示的字符是:%c\n", c, c);
    c = 0141;
    printf("ASCII值=%#o表示的字符是:%c\n", c, c);
    c = 0x61;
    printf("ASCII值=%#x表示的字符是:%c\n", c, c);
    c = 'a';
    printf("c='a'表示的字符是:%c\n", c);
    c = '\141';
    printf("c=\'\\141\'表示的字符是:%c\n", c);
    c = '\x61';
    printf("c=\'\\x61\'表示的字符是:%c\n", c);
    return 0;
}