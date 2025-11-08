/**
 * 从键盘输入某年某月，编程输出该年的该月拥有的天数。
 * 。。。。。。。。。。。。。。。。。。
 */

#include<stdio.h>

#define MONTHS 12

int main() {
    int days[2][MONTHS] = {
        {
            31, 28, 31, 30,
            31, 30, 31, 31,
            30, 31, 30, 31
        },
        {
            31, 29, 31, 30,
            31, 30, 31, 31,
            30, 31, 30, 31
        }
    };

    int year = -1;
    int month = -1;
    while (month < 1 || month > 12) {
        printf("Input year month:");
        scanf("%d, %d", &year, &month);

        if (
            (
                (year % 4 == 0)
                && (year % 100 != 0)
            )
            || (year % 400 == 0)
        ) {
            printf("The number of days is %d\n", days[1][month - 1]);
        } else {
            printf("The number of days is %d\n", days[0][month - 1]);
        }
    }

    return 0;
}
