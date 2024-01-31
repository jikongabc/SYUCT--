//#include<stdio.h>
//#define MAXN 6
//int main(){
//	int i,j,m,n,sum;
//	int a[MAXN][MAXN];
//	printf("Enter m,n:");
//	scanf("%d %d",&m,&n);
//	printf("Enter an array:\n");
//	for(i=0;i<m;i++){
//		for(j=0;j<n;j++){
//			scanf("%d",&a[i][j]);
//		}
//	}
//	for(i=0;i<m;i++){
//		sum=0;
//		for(j=0;j<n;j++){
//			sum=sum+a[i][j];
//		}
//		printf("sum of row %d is %d\n",i,sum);
//	}
//	return 0;
//} 


//#include<stdio.h>
//int main()
//{
//    int n,a[101][101],ans=0;
//    printf("Enter n:");
//    scanf("%d",&n);
//    printf("Enter an array:\n");
//    for(register int i=1;i<=n;i++)
//    {
//        for(register int j=1;j<=n;j++)
//        {
//            scanf("%d",&a[i][j]);
//            if(i==n||j==n)//不加最后一列和最后一行
//            {
//                continue;
//            }
//            ans+=a[i][j];//边输入边累加
//        }
//    }
//    for(register int i=2,j=(n-1);i<=(n-1),j>=2;i++,j--)
//    {
//        ans-=a[i][j];//减去副对角线上的，注意两个角上的不要多减
//    }
//    printf("sum=%d",ans);
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int m, n, i, j;
//    printf("Enter m,n:");
//    scanf("%d%d", &m, &n);
//    printf("Enter an array:\n");
//    int a[100][100];
//    for (i = 1; i <=m; i++)
//    {
//        for (j = 1; j <=n; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    int flag = 0;//设置一个标记，只要有一个数满足条件，标记就会变化，这是最后判断是否输出None的条件
//    for (i = 2; i <=m - 1; i++)
//    {
//        for (j = 2; j <= n - 1; j++)
//        {
//            if (a[i][j] > a[i - 1][j] && a[i][j] > a[i + 1][j] && a[i][j]>a[i][j - 1] && a[i][j] > a[i][j + 1])
//            {
//                printf("%d %d %d\n", a[i][j], i, j);
//                flag = 1;
//            }
//        }
//    }
//    if (flag == 0)
//        printf("None %d %d", m, n);
//    return 0;
//}


//#include "stdio.h"
////矩阵右移函数
//void MatrixShiftRight(int arr[][6],int pow){
//    //总行后一位值寄存器1
//    int temp1;
//    for (int i = 0; i < pow; ++i) {
//        //换行刷新
//        temp1 = 0;
//        for (int j = 0; j < pow; ++j) {
//            //如果当前为该行最后一位
//            if (j+1 == pow){
//                arr[i][0] = temp1;
//            //如果当前为该行第一位
//            } else if(j == 0){
//                temp1 = arr[i][j+1];
//                arr[i][j+1] = arr[i][j];
//            //如果当前为非首尾位
//            } else{
//                //后一位值寄存器2
//                int temp2 = arr[i][j+1];
//                arr[i][j+1] = temp1;
//                temp1 = temp2;
//            }
//        }
//    }
//}
//int main(){
//    int times,pow;
//    scanf("%d %d",&times,&pow);
//    int arr[6][6];
//    for (int i = 0; i < pow; ++i) {
//        for (int j = 0; j < pow; ++j) {
//            scanf("%d",&arr[i][j]);
//        }
//    }
//    //方阵循环右移
//    while (times--){
//        //调用矩阵右移函数
//        MatrixShiftRight(arr,pow);
//    }
//    for (int i = 0; i < pow; ++i) {
//        for (int j = 0; j < pow; ++j) {
//            printf("%d ",arr[i][j]);
//            if(j+1 == pow)
//                printf("\n");
//        }
//    }
//    return 0;
//}


#include<stdio.h>
int main (void) {
	int m, n;
	printf("请输入矩阵宽度：");
	scanf("%d", &n);
	printf("请输入向右移动多少位：");
	scanf("%d", &m);
	int arr[n][n], new_arr[n][n];
	printf("请输入矩阵元素，空格分开：\n");
	//m%=n;  //右移超过数组列数的情况
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			scanf("%d", &arr[i][j]);

	printf("右移前：\n");
	for(int i=0; i<n; i++) {	//行不变
		for(int j=0; j<n; j++)
			printf("%4d", arr[i][j]);
		printf("\n\n");

		//先将原数组的n-m列开始到n，依次从新数组第1列放入到m
		for(int j=0, k=n-m; j<m; j++, k++)
			new_arr[i][j] = arr[i][k];
			
		//再将原数组的第一列开始到n-m-1列，放入新数组的 m+1开始到n
		for(int j=m, k=0; j<n; j++, k++)
			new_arr[i][j] = arr[i][k];
	}

	printf("右移后：\n");
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++)
			printf("%4d", new_arr[i][j]);
		printf("\n\n");
	}
	return 0;
}


