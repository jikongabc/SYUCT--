
// #include <stdio.h>
// #define MAXN 20

// void strmcpy(char *t, int m, char *s);
// void ReadString(char s[]); /* 由裁判实现，略去不表 */

// int main()
// {
//     char t[MAXN], s[MAXN];
//     int m;

//     scanf("%d\n", &m);
//     ReadString(t);
//     strmcpy(t, m, s);
//     printf("%s\n", s);

//     return 0;
// }

// /* 你的代码将被嵌在这里 */

// void strmcpy(char *t, int m, char *s)
// {
//     t = t + m - 1;
//     while (*t != '\0')
//     {
//         *s = *t;
//         s++;
//         t++;
//     }
//     *s = '\0';
// }

// #include <stdio.h>
// #define MAXN 20

// void delchar(char *str, char c);
// void ReadString(char s[]); /* 由裁判实现，略去不表 */

// int main()
// {
//     char str[MAXN], c;

//     scanf("%c\n", &c);
//     // ReadString(str);
//     delchar(str, c);
//     printf("%s\n", str);

//     return 0;
// }

// /* 你的代码将被嵌在这里 */
// void delchar(char *str, char c)
// {
//     int i = 0, j = 0;
//     while (str[i] != '\0')
//     {
//         if (str[i] != c)
//         {
//             str[j] = str[i];
//             j++;
//         }
//         i++;
//     }
//     str[j] = '\0';
// }

// #include <stdio.h>
// #define MAXN 10

// int ArrayShift(int a[], int n, int m);

// int main()
// {
//     int a[MAXN], n, m;
//     int i;

//     scanf("%d %d", &n, &m);
//     for (i = 0; i < n; i++)
//         scanf("%d", &a[i]);

//     ArrayShift(a, n, m);

//     for (i = 0; i < n; i++)
//     {
//         if (i != 0)
//             printf(" ");
//         printf("%d", a[i]);
//     }
//     printf("\n");

//     return 0;
// }

// /* 你的代码将被嵌在这里 */
// int ArrayShift(int a[], int n, int m)
// {
//     m = m % n; 
//     int str[m];
//     for (int i = 0; i < m; ++i)
//     {
//         str[i] = a[n - m + i];
//     }
//     for (int i = n - m - 1; i >= 0; --i)
//     {
//         a[m + i] = a[i];
//     }
//     for (int i = 0; i < m; ++i)
//     {
//         a[i] = str[i];
//     }
//     return 0;
// }

#include <stdio.h>
#define MAXN 20

void CountOff(int n, int m, int out[]);

int main()
{
    int out[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    CountOff(n, m, out);
    for (i = 0; i < n; i++)
        printf("%d ", out[i]);
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
void CountOff(int n, int m, int out[])
{
    int num[n];
    for (int i = 0; i < n; i++)
    {
        num[i] = i + 1;
    }
    int count = 0;
    int i = 0, value = 0, site = 0;
    while (count < n)
    {
        if (num[i] != -1)
        {
            site++;
        }
        if (site == m)
        {
            value++;
            out[i] = value;
            site = 0;
            num[i] = -1;
            count++;
        }
        i++;
        if (i == n)
        {
            i = 0;
        }
    }
}
