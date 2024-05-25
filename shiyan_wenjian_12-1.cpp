#include <stdio.h>
#include <stdbool.h>

// 函数用于检查一个数是否为素数
bool is_prime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    FILE *file;
    file = fopen("prime.txt", "w");
    if (file == NULL)
    {
        printf("无法打开文件\n");
        return 1;
    }

    int count = 0; // 计数器，记录已找到的素数数量
    int num = 2;   // 从2开始检查每个数是否为素数

    while (count < 500)
    {
        if (is_prime(num))
        {
            fprintf(file, "%d\n", num);
            count++;
        }
        num++;
    }

    fclose(file);
    printf("已成功生成500个素数并存入prime.txt文件中\n");
    return 0;
}
