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
//            if(i==n||j==n)//�������һ�к����һ��
//            {
//                continue;
//            }
//            ans+=a[i][j];//��������ۼ�
//        }
//    }
//    for(register int i=2,j=(n-1);i<=(n-1),j>=2;i++,j--)
//    {
//        ans-=a[i][j];//��ȥ���Խ����ϵģ�ע���������ϵĲ�Ҫ���
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
//    int flag = 0;//����һ����ǣ�ֻҪ��һ����������������Ǿͻ�仯����������ж��Ƿ����None������
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
////�������ƺ���
//void MatrixShiftRight(int arr[][6],int pow){
//    //���к�һλֵ�Ĵ���1
//    int temp1;
//    for (int i = 0; i < pow; ++i) {
//        //����ˢ��
//        temp1 = 0;
//        for (int j = 0; j < pow; ++j) {
//            //�����ǰΪ�������һλ
//            if (j+1 == pow){
//                arr[i][0] = temp1;
//            //�����ǰΪ���е�һλ
//            } else if(j == 0){
//                temp1 = arr[i][j+1];
//                arr[i][j+1] = arr[i][j];
//            //�����ǰΪ����βλ
//            } else{
//                //��һλֵ�Ĵ���2
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
//    //����ѭ������
//    while (times--){
//        //���þ������ƺ���
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
	printf("����������ȣ�");
	scanf("%d", &n);
	printf("�����������ƶ�����λ��");
	scanf("%d", &m);
	int arr[n][n], new_arr[n][n];
	printf("���������Ԫ�أ��ո�ֿ���\n");
	//m%=n;  //���Ƴ����������������
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			scanf("%d", &arr[i][j]);

	printf("����ǰ��\n");
	for(int i=0; i<n; i++) {	//�в���
		for(int j=0; j<n; j++)
			printf("%4d", arr[i][j]);
		printf("\n\n");

		//�Ƚ�ԭ�����n-m�п�ʼ��n�����δ��������1�з��뵽m
		for(int j=0, k=n-m; j<m; j++, k++)
			new_arr[i][j] = arr[i][k];
			
		//�ٽ�ԭ����ĵ�һ�п�ʼ��n-m-1�У������������ m+1��ʼ��n
		for(int j=m, k=0; j<n; j++, k++)
			new_arr[i][j] = arr[i][k];
	}

	printf("���ƺ�\n");
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++)
			printf("%4d", new_arr[i][j]);
		printf("\n\n");
	}
	return 0;
}


