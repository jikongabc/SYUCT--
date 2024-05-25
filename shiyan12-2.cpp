#include <stdio.h>

// 密码加密函数
char encrypt_char(char c)
{
    return c ^ 15; // 对每个字符进行异或运算以加密
}

int main()
{
    FILE *file;
    char username[20];
    char password[20];
    int i, j;

    // 打开文件
    file = fopen("f12-2.dat", "w");
    if (file == NULL)
    {
        printf("无法打开文件！\n");
        return 1;
    }

    // 输入5个用户信息
    for (i = 0; i < 5; i++)
    {
        printf("请输入第%d个用户的账号和密码：\n", i + 1);
        scanf("%s %s", username, password);

        // 加密密码
        for (j = 0; password[j] != '\0'; j++)
        {
            password[j] = encrypt_char(password[j]);
        }

        // 写入文件
        fprintf(file, "%s %s\n", username, password);
    }

    // 关闭文件
    fclose(file);
    printf("用户信息已写入文件。\n");

    return 0;
}
