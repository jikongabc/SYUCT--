#include <stdio.h>

int main()
{
    FILE *fileSrc, *fileDst;
    char ch;

    // 打开源文件
    fileSrc = fopen("f12-2.dat", "r");
    if (fileSrc == NULL)
    {
        printf("无法打开源文件 f12-2.dat！\n");
        return 1;
    }

    // 打开目标文件
    fileDst = fopen("f12-3.txt", "w");
    if (fileDst == NULL)
    {
        printf("无法创建目标文件 f12-3.txt！\n");
        fclose(fileSrc); // 关闭源文件
        return 1;
    }

    // 复制文件内容
    while ((ch = fgetc(fileSrc)) != EOF)
    {
        fputc(ch, fileDst);
    }

    // 关闭文件
    fclose(fileSrc);
    fclose(fileDst);

    printf("文件已成功复制为 f12-3.txt。\n");
    return 0;
}
