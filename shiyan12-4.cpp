#include <stdio.h>
#include <string.h>

// 密码加密函数
char encrypt_char(char c)
{
    return c ^ 15; // 对每个字符进行异或运算以加密
}

// 检查用户是否合法的函数
int checkUserValid(const char *username, const char *password)
{
    FILE *file;
    char fileUsername[20];
    char filePassword[20];
    int found = 0;

    // 打开文件
    file = fopen("f12-2.dat", "r");
    if (file == NULL)
    {
        printf("无法打开文件 f12-2.dat！\n");
        return 0;
    }

    // 读取文件中的用户信息
    while (fscanf(file, "%s %s", fileUsername, filePassword) == 2)
    {
        // 对文件中的密码进行解密
        int i;
        for (i = 0; filePassword[i] != '\0'; i++)
        {
            filePassword[i] = encrypt_char(filePassword[i]);
        }

        // 比较用户名和密码
        if (strcmp(username, fileUsername) == 0 && strcmp(password, filePassword) == 0)
        {
            found = 1;
            break;
        }
    }

    // 关闭文件
    fclose(file);

    return found;
}

int main()
{
    char inputUsername[20];
    char inputPassword[20];

    // 提示用户输入用户名和密码
    printf("请输入用户名：");
    scanf("%s", inputUsername);
    printf("请输入密码：");
    scanf("%s", inputPassword);

    // 调用checkUserValid函数检查用户合法性
    if (checkUserValid(inputUsername, inputPassword))
    {
        printf("Valid user!\n");
    }
    else
    {
        printf("Invalid user!\n");
    }

    return 0;
}
