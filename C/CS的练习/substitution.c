#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    // 检验参数
    if (argc != 2) {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    // 检验长度
    if (strlen(argv[1]) != 26) { // 注意逻辑，要让密钥刚好等于26
        printf("Key must contain 26 characters.\n");
        return 1;
    } 
    // 检验是否是字母
    for (int i = 0; i < 26; i++) {
            if (!isalpha(argv[1][i])) {
            printf("Usage: ./substitution key\n");
            return 1;
        } 
    }
    // 检验是否有重复字母(SS)
    int count[26] = {0};
    for (int i = 0; i < 26; i++) {
        int index = tolower(argv[1][i]) - 'a';
        if (count[index] != 0) {
            printf("Key must contain 26 characters.\n");
            return 1;
        }
        count[index]++; // 值+1，证明这个字母出现了一次
    }

    char key[26] = {0};
    for (int i = 0; i < 26; i++)
    {
        key[i] = tolower(argv[1][i]);
    }
    
    printf("Success.\n");
    char plaintext[700];
    printf("plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);
    printf("ciphertext: ");
    for (int i = 0; plaintext[i] != '\0'; i++) 
    {
        if (islower(plaintext[i])) {
            int index = plaintext[i] - 'a';
            char ciphertext = key[index];
            printf("%c", ciphertext); 
        } else if (isupper(plaintext[i])){
            int index = plaintext[i] - 'A';
            char ciphertext = toupper(key[index]);
            printf("%c", ciphertext);
        } else {
            printf("%c", plaintext[i]);
        }
    }
    return 0;
}