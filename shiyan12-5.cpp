#include <stdio.h>
#include <string.h>

#define MAX_USERS 5
#define USERNAME_LEN 20
#define PASSWORD_LEN 20

// 密码加密函数
char encrypt_char(char c)
{
    return c ^ 15; // 对每个字符进行异或运算以加密
}

// 用户信息结构体
typedef struct
{
    char username[USERNAME_LEN];
    char password[PASSWORD_LEN];
} User;

// 将用户信息写入文件的函数
void write_users_to_file(const char *filename, const User users[], int count)
{
    FILE *file = fopen(filename, "wb");
    if (file == NULL)
    {
        printf("无法打开文件 %s 用于写入！\n", filename);
        return;
    }

    // 写入用户信息
    for (int i = 0; i < count; i++)
    {
        fwrite(users + i, sizeof(User), 1, file);
    }

    fclose(file);
}

// 从文件读取用户信息并显示到屏幕的函数
void read_users_from_file(const char *filename)
{
    FILE *file = fopen(filename, "rb");
    if (file == NULL)
    {
        printf("无法打开文件 %s 用于读取！\n", filename);
        return;
    }

    User user;
    // 读取并显示用户信息
    while (fread(&user, sizeof(User), 1, file) == 1)
    {
        printf("用户名: %s\n", user.username);
        printf("密码: ");
        for (int i = 0; user.password[i] != '\0'; i++)
        {
            printf("%c", encrypt_char(user.password[i]));
        }
        printf("\n\n");
    }

    fclose(file);
}

int main()
{
    User users[MAX_USERS];
    int user_count = 0;

    // 提示用户输入信息
    for (int i = 0; i < MAX_USERS; i++)
    {
        printf("请输入第 %d 个用户的用户名: ", i + 1);
        scanf("%s", users[i].username);
        printf("请输入第 %d 个用户的密码: ", i + 1);
        scanf("%s", users[i].password);

        // 加密密码
        for (int j = 0; users[i].password[j] != '\0'; j++)
        {
            users[i].password[j] = encrypt_char(users[i].password[j]);
        }
        user_count++;
    }

    // 写入文件
    write_users_to_file("f12-5.dat", users, user_count);

    // 从文件读取并显示用户信息
    printf("\n读取文件中的用户信息:\n");
    read_users_from_file("f12-5.dat");
    
    return 0;
}
