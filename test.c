#include <stdio.h>

int main() {
    int x, y, z;
    int sum;
    float average;

    // 从键盘输入三个整数
    printf("请输入三个整数（以空格隔开）：");
    scanf("%d %d %d", &x, &y, &z);

    // 计算三个数的和
    sum = x + y + z;

    // 计算三个数的平均值
    average = sum / 3.0;  // 使用3.0确保浮点数除法

    // 输出结果
    printf("%d\n", sum);
    printf("%.2f\n", average);

    return 0;
}
