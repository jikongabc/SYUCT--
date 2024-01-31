//实验7
//#include <stdio.h>
//int main(){
//    int n, count, sum;
//    sum = 0;
//    count = 0;
//    printf("Enter a number:");
//    scanf("%d", &n);
//    while(n!=0)
//    {
//        count++;
//        sum += n%10;
//        n /= 10;
//    }
//    printf("%d %d\n", count, sum);
//
//    return 0;
//}




//#include <stdio.h>
//int main ()
//{
//
//	int n;
//	printf("Enter n:");
//	scanf("%d",&n);
//    printf("Enter %d numbers:",n);
//	int num,i,min;
//	scanf("%d",&num);
//	min = num;
//
//	for(i = 1; i < n; i++){
//		scanf("%d",&num);
//		if(min > num){
//			min = num;
//		}
//	}
//	printf("min = %d\n",min);
//
//	return 0;
//}


//#include<stdio.h>
//int main(){
//    int denominitor,flag;
//    double eps,item,sum;
//    flag=1;
//    denominitor=1;
//    sum=0;
//    printf("Enter eps:");
//    scanf("%lf",&eps);
//    do{
//        item= flag/denominitor;
//        sum=sum+item;
//        flag=-flag;
//        denominitor=denominitor+3.0;
//    }while(item<eps);
//    printf("sum=%.6f\n",sum);
//    return 0;
//
//}


//
//#include<stdio.h>
//int main(){
//    int denominitor,flag;
//    double eps,item,sum;
//    flag=1;
//    denominitor=1;
//    sum=0.0;
//    printf("Enter eps:");
//    scanf("%lf",&eps);
//    do{
//        item= 1.0/denominitor* 1.0;
//        flag=-flag;
//        sum=sum+item*flag;
//        denominitor=denominitor+3.0;
//    }while(item>eps);
//    printf("sum=%.6lf\n",sum);
//    return 0;
//
//}

//实验8

//#include<stdio.h>
//int main(){
//    double e,item;
//    int i,j,n;
//    printf("Enter n:");
//    scanf("%d",&n);
//    e=0;
//    item=1;
//    for(i=1;i<=n;i++){
//        for(j=1;j<=n;j++)
//            item=item*j;
//        e=e+1.0/item;
//
//    }
//    printf("e=%.4f\n",e);
//
//    return 0;}


//#include<stdio.h>
//int main(){
//    double e,item;
//    int i,j,n;
//    printf("Enter n:");
//    scanf("%d",&n);
//    e=1;
//    for(i=1;i<=n;i++){
//        item=1;
//        for(j=1;j<=i;j++)
//            item=item*j;
//        e=e+1.0/item;
//
//    }
//    printf("e=%.4lf\n",e);
//
//    return 0;}



//#include <stdio.h>
//int main () {
//int x, count = 0;
//printf("Enter m:");
//	scanf("%d", &x);
//	for ( int k = x / 5; k > 0; k-- )
//		for ( int i = x / 2; i > 0; i-- )
//			for ( int j = x; j > 0; j-- )
//				if ( k * 5 + i * 2 + j == x)
//    			{
//					printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", k, i, j, k + j + i);
//					count++;
//            	}
//    printf("count = %d",count);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n;
//	char ch='A';
//	printf("Enter n:");
//	scanf("%d", &n);
//	for (int i = 0;i < n;i++) {
//		for (int j = n-i;j > 0;j--) {
//			printf("%c ", ch);
//			ch++;
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(){
//    int flag,i,j,m,n,s;
//    printf("Enter m,n:");
//    scanf("%d%d",&m,&n);
//    flag=0;
//    for(i=m;i<=n;i++){
//        s=0;
//        for(j=1;j<i;j++){
//            if(i%j==0){
//                s=s+j;
//            }
//        }
//        if(i==s){
//            flag=1;
//            printf("%d=1",i);
//            for(j=2;j<i;j++){
//                if(i%j==0){
//                    printf("+%d",j);
//                }
//            }
//            printf("\n");
//        }
//    }
//    if(flag==0){
//        printf("None\n");
//    }
//    return 0;
//}


//实验9
//#include<stdio.h>
//#include<math.h>
//double dist (double x1,double y1,double x2,double y2);
//int main(){
//    double x1,y1,x2,y2;
//    printf("Enter x1,y1,x2,y2:");
//    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
//    printf("dist=%.2lf\n",dist(x1,y1,x2,y2));
//    return 0;
//}
//double dist(double x1,double y1,double x2,double y2)
//{
//    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
//}


//#include<stdio.h>
//int sign(int X);
//int main()
//{
//	int x,y;
//	printf("Enter x:");
//	scanf("%d",&x);
//	y=sign(x);
//	printf("sign(%d)=%d",x,y);
//	return 0;
//}
//int sign(int X)
//{
//	int Y;
//	if (X>0)
//	Y=1;
//	else if(X==0)
//	Y=0;
//	else Y=-1;
//	return Y;
//}





//#include <stdio.h>
//
//int fibonacci( int n )
//{
//	int result;
//
//	if ( n == 0 ) {
//		result = 0;
//	} else if ( n == 1 ) {
//		result = 1;
//	} else {
//		result = fibonacci( n-1 ) + fibonacci( n-2 );
//	}
//	return result;
//}
//
//int main ( int argc, char **argv )
//{
//    int n;
//    printf("Enter x:");
//	scanf("%d", &n);
//	printf("fib(%d)=%d", n, fibonacci(n));
//	return 0;
//}


//#include<stdio.h>
//int main(){
//    double h,r_lower,r_upper,v;
//    printf("Enter r_lower,r_upper,h:");
//    scanf("%lf%lf%lf",&r_lower,&r_upper,&h);
//    v=volume_tc(r_lower,h,r_upper);
//    printf("Volume=%.2lf\n",v);
//    return 0;
//}
//double volume_tc(double r_lower,h,r_upper,h);
//{
//
//    return 3.14159*h*(r_lower*r_lower+r_upper*r_upper=+r_upper*r_lower)/3;
//}




#include<stdio.h>
#define PAI 3.14159
float shangarea(float r)
{
	return  PAI * r * r;
}
float xiaarea(float R)
{
	return PAI * R * R;
}
float tiji(float r, float R, float h)
{
	return (1/3.00)*PAI*h*(R*R + r*r + R*r);
}
int main()
{
	float r, R, h;
	printf("Enter r,R,h:");
	scanf("%f%f%f", &r, &R, &h);
	float V=tiji(r, R, h);
	printf("volume=%.2lf",V);
	return 0;
}
