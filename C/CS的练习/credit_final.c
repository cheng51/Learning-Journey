#include <stdio.h>

int main(void)
{
    long long number;

    // 1. 获取输入 (不用 get_long，用标准 scanf)
    do {
        printf("Number: ");
        scanf("%lld", &number);
    } while (number <= 0);

    // 2. 准备变量
    long long temp = number; // 复制一份，用来做切片运算，保护原 number 不被破坏
    int sum = 0;             // 总和
    int count = 0;           // 记录这是第几位 (从0开始数)

    // 3. 循环每一位 (卢恩算法核心)
    while (temp > 0)
    {
        int digit = temp % 10; // 取出当前最后一位数字

        if (count % 2 == 0)
        {
            // 偶数轮 (第0, 2, 4...位，也就是实际的倒数第1, 3, 5...位)
            // 规则：直接加，不乘2
            sum = sum + digit;
        }
        else
        {
            // 奇数轮 (第1, 3, 5...位，也就是实际的倒数第2, 4, 6...位)
            // 规则：乘2
            int product = digit * 2;

            // 规则细节：如果乘积是两位数 (比如 7*2=14)，要变成 1+4=5
            if (product > 9)
            {
                sum = sum + (product % 10) + (product / 10);
            }
            else
            {
                sum = sum + product;
            }
        }

        temp = temp / 10; // 砍掉最后一位，准备处理下一位
        count++;          // 记数加1
    }

    // 4. 验证算法结果 (如果不合法，直接判死刑)
    if (sum % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    // 5. 判断卡片类型 (利用原 number 和算出来的位数 count)
    // 我们需要获取开头的两位数字
    long long start = number;
    while (start >= 100)
    {
        start = start / 10;
    }
    // 现在 start 里面存的就是前两位数 (比如 40, 51, 34)

    // AMEX: 15位, 开头 34 或 37
    if ((start == 34 || start == 37) && count == 15)
    {
        printf("AMEX\n");
    }
    // MASTERCARD: 16位, 开头 51-55
    else if ((start >= 51 && start <= 55) && count == 16)
    {
        printf("MASTERCARD\n");
    }
    // VISA: 13 或 16位, 开头是 4
    // 注意：VISA 开头是 4，所以 start / 10 应该是 4 (因为 start 是两位数，比如 41/10=4)
    else if ((start / 10 == 4) && (count == 13 || count == 16))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}