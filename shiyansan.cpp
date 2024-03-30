// #include <stdio.h>
// void month_day(int year, int yearday, int *pmonth, int *pday);

// int main(void)
// {
//     int day, month, year, yearday; 
//     scanf("%d%d", &year, &yearday);
//     month_day(year, yearday, &month, &day); 
//     printf("%d %d %d\n", year, month, day);
//     return 0;
// }

// void month_day(int year, int yearday, int *pmonth, int *pday)
// {
//     int k, leap;
//     int tab[2][100] = {
//         {0, 31, 28, 31, 30, 31, 30, 31, 31, 31, 30, 31, 30}, 
//         {0, 31, 29, 31, 30, 31, 30, 31, 31, 31, 30, 31, 30},
//     };

//     leap = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);

//     for (k = 1; yearday > tab[leap][k]; k++)
//     {                            
//         yearday -= tab[leap][k]; 
//     }
//     *pmonth = k;
//     *pday = yearday;
// }

// #include <stdio.h>
// int sum(int a[], int n);
// int main()
// {
//     int a[15], n = 0;
//     while (~scanf("%d", &a[n]))
//     {
//         n++;
//     }
//     printf("%d", sum(&a[15], n)); 

//     return 0;
// }

// int sum(int *p, int n)
// {
//     int S = 0;
//     for (int i = 0; i < n; i++)
//     {
//         S = S + *p;
//     }

//     return S;
// }



// #include <stdio.h> 
// #define MAXS 20 void zip( char *p );
// void zip(char *p)
// {
//     char *a = p;
//     int n;
//     while (*p != '\0')
//     {
//         n = 1;
//         while (*p == *(p + n))
//             n++;
//         if (n >= 10)
//         {
//             *a++ = n / 10 + '0';
//             *a++ = n % 10 + '0';
//         }
//         else if (n >= 2)
//         {
//             *a++ = n + '0';
//         }
//         *a++ = *(p + n - 1);
//         p = p + n;
//     }
//     *a = '\0';
// }
// void ReadString( char *s );  
// int main() { 
//     char s[MAXS];
//     scanf("%s", s);
//     zip(s); 
//     printf("%s\n", s); 
//     return 0; 
//     }

#include <stdio.h>
#define MAXN 80
void zip(char *p);
int main(void)
{
    char line[MAXN];
    gets(line);
    zip(line);
    puts(line);

    return 0;
}

void zip(char *p)
{
    char *q = p;

    int n;
    while (*p != '\0')
    {
        n = 1;
        while (*p == *(p + n))
        {
            n++;
        }

        if (n >= 10)
        {
            *q++ = (n / 10) + '0';

            *q++ = (n % 10) + '0';
        }
        else if (n >= 2)
        {
            *q++ = n + '0';
        }
        *q++ = *(p + n - 1);
        p = p + n;
    }
    *q = '\0';
}