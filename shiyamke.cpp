#include<stdio.h>
#include<math.h>
int main()
{
    int a = 0, b = 0, c = 0;
    double area = 0, perimeter = 0, s = 0;
    scanf_s("%d %d %d", &a, &b, &c);
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        perimeter = a + b + c;
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("area = %.2lf;", area);
        printf(" perimeter = %.2lf", perimeter);
    }
    else {
        printf("These sides do not correspond to a valid triangle");
    }
    return 0;
}