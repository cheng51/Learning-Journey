#include <stdio.h>

int main()
{
    struct date {
        int year;
        int month;
        int day;
    };

    struct date today = {2026, 3, 21};  // 通过位置传参初始化
    struct date month = {.year=2026, .month=3};  // 通过关键字传参初始化

    printf("Today's date is %i-%i-%i.\n", today.year, today.month, today.day);
    printf("This month is %i-%i.\n", today.year, today.month);

    return 0;
}