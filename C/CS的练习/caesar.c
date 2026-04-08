#include <stdio.h>
#include <string.h> // 
#include <ctype.h> // 使用isdigit函数, isupper(), islower()
#include <stdlib.h> // stoi()函数

int main(int argc, char const *argv[]) // 接收参数(先编译:gcc -o 目标文件名 源文件名.c;再运行./文件名 参数)
{   
    // 接下来对用户输入的参数进行检验
    if (argc != 2) {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int i = 0, n = strlen(argv[1]); i < n; i++) {
        if (!isdigit(argv[1][i])) { // 遍历argv[1]里面的所有字符，函数前加!
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    printf("Success\n");

    int k = atoi(argv[1]) % 26; // 参数默认是字符串，要用atoi()转换成整数
    printf("plaintext:  ");
    char plaintext[100];
    fgets(plaintext, sizeof(plaintext), stdin);
    // fgets(存储的数组名， 读取的长度， 标准输入简写)
    char ciphertext[101]; // 留给NULL
    int n = sizeof(plaintext); // 为循环后调用做准备
    for (int i = 0; i < n; i++) {
       if (isupper(plaintext[i])) {
        ciphertext[i] = (plaintext[i] - 'A' + k) % 26 + 'A';
       } else if (islower(plaintext[i])) {
        ciphertext[i] = (plaintext[i] - 'a' + k) % 26 + 'a';
       } else {
        ciphertext[i] = plaintext[i];
       }
    }
    ciphertext[n] = '\0'; // 手动为循环遍历后的新数组添加NULL
    printf("%s\n", ciphertext);
    return 0;
}