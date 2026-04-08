#include <ctype.h>
// 使用isalph函数
#include <stdio.h>
#include <string.h>
#include <math.h> // round函数四舍五入

int num_char(char *text);
int num_word(char *text);
int num_sent(char *text);

int main()
{
    char text[1000];
    printf("text:\n");
    fgets(text, sizeof(text), stdin);
    // fgets函数(存储变量， 最大读取长度， 标准输入)
    printf("text:%s\n", text);

    int char_num = num_char(text);
    int word_num = num_word(text);
    int sent_num = num_sent(text);
    
    double L = char_num / (word_num / 100.0);
    double S = sent_num / (word_num / 100.0);

    double index = 0.0588 * L - 0.296 * S - 15.8;
    printf("%f\n", index);

    if(index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 1 && index <= 16)
    {
        printf("Grade %i\n", (int)round(index));
        // 对index使用round四舍五入，得到double类型的返回值，
        // 再用(int)强制转换成整数型
    }
    else
    {
        printf("Grade 16+");
    }
    return 0;

}

int num_char(char *text)
{   
    int count = 0;
    for (int i = 0, N = strlen(text); i < N; i++)
    {
        char ch = text[i];
        if(isalpha(ch) != 0)
        {
            count += 1;
        }
    }
    return count;
}

int num_word(char *text)
{
    int count = 0;
    for (int i = 0, N = strlen(text); i < N; i++)
    {
        char ch = text[i];
        if(ch == ' ')
        {
            count += 1;
        }
    }
    return (count + 1);
    
}

int num_sent(char *text)
{
    int count = 0;
    for (int i = 0, N = strlen(text); i < N; i++)
    {
        char ch = text[i];
        if(ch == '.'|| ch == '!' || ch == '?')
        {
            count += 1;
        }
    }
    return count;
}

