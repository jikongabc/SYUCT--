#include<stdio.h>
int main(void) {
    int fahr, lower, upper;  /*fahr��ʾ�����¶�*/
    double celsius;
    printf("Enter lower:");
    scanf_s("%d", &lower);
    printf("Enter upper:");
    scanf_s("%d", &upper);
    if (lower > upper) {
        printf("Invalid.\n");
    }
    else {
        printf("fahr celsius\n");   /*��ʾ��ͷ*/
    
        for (fahr = lower; fahr <= upper; fahr += 2) {
            celsius = 5 * (fahr - 32.0) / 9.0;
            printf("%d %6.1lf\n", fahr, celsius);
        }
    }
    return 0;
}
