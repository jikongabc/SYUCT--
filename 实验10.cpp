//#include<stdio.h>
//double fact(int n);
//double multi(int n);
//int main(void){
//    double eps,item,sum;
//    int i;
//    printf("Enter eps:");
//    scanf("%le",&eps);
//    i=0;
//    item=1;
//    sum=0;
//    while(item>=eps){
//        sum+=item;
//        i++;
//        item=fact(i)/multi(2*i+1);
//    }
//    sum+=item;
//    printf("PI=%0.5f\n",sum*2);
//    return 0;
//
//}
//double fact(int n){
//    double result;
//    int i;
//    result=1;
//    for(i=1;i<=n;i++){
//        result=result*i;
//    }
//   return result;
//}
//double multi(int n){
//    double result;
//    int i;
//    result=1;
//    for(i=3;i<=n;i+=2){
//        result=result* i;
//    }
//    return result;
//}



//#include <stdio.h>
//
//int main(int argc, char *argv[]) {
//
//	char ch;
//	printf("Enter characters:");
//	ch=getchar();
//	while(ch!='\n')
//	{
//	if(ch>='a'&&ch<'z')
//		ch=ch-31;
//	else if(ch=='z')
//		ch='A';
//	else if(ch>='A'&&ch<'Z')
//		ch=ch+33;
//	else if(ch=='Z')
//		ch='a';
//	putchar(ch);
//	ch=getchar();
//
//	}
//
//
//	return 0;
//
////}
//
//
//
//
//#include <stdio.h>
//
//int fn(int a,int n );
//int SumA( int a,int  n );
//
//int main()
//{
//    int a, n;
//
//    scanf("%d %d", &a, &n);
//    printf("fn(%d, %d) = %d\\n", a, n, fn(a,n));
//    printf("s = %d\\n", SumA(a,n));
//
//    return 0;
//}


#include <stdio.h>

int reverse(int number);

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}
int reverse(int number) {
    int sign = 1;
    int num = 0;

    if (number < 0) {
        sign = -1;
        number = -number;
    }
    while (number)
    {
        num = (number % 10) + (num*10);
        number = number / 10;

    }
    return (num * sign);
}

