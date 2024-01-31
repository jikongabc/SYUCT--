//#include<stdio.h>
//#define MAXN 10
//int main(){
//	int i,index,j,n,x;
//	int a[MAXN];
//	printf("Enter n:");
//	scanf("%d",&n);
//	printf("Enter %d integers:",n);
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	printf("Enter x:");
//	scanf("%d",&x);
//	for(i=0;i<n;i++){
//		if(x<a[i]){
//			break;
//		}
//	}
//	index=i;
//	for(j=n-1;j>=index;j--){
//		a[j+1]=a[j];
//	}
//	a[index]=x;
//	for(i=0;i<=n;i++){
//		printf("%d",a[i]);
//	}
//	printf("\n");
//	return 0;
//} 



//#include <stdio.h>
//int main()
//{
//    int n,i;
//    scanf("%d",&n);
//    int a[n];
//    for (i=0; i<=n-1; i++) {
//        scanf("%d",&a[i]);
//    }
//    for (i=n-1; i>=0; i--) {
//        printf("%d ",a[i]);
//    }
//}


//#include<stdio.h>
//int main(){
// int n;
// int i;
// int arr[10];
// printf("Input n: ");
// scanf("%d",&n);
// printf("Input %d integers: ",n);
// for(i=0;i<n;i++){
//     scanf("%d",&arr[i]);
// }
// int max=arr[0];
// int index=0;
// for(i=1;i<n;i++){
//     if(max<arr[i]){
//         max=arr[i];
//         index=i;
//     }
// }
// printf("max=%d, index=%d",max,index);
// 
//    return 0;
//}

#include<stdio.h>
#define MAXN 20
int main(void){
	int i,flag,n,x;
	int a[MAXN];
	printf("Enter n,x:");
	scanf("%d%d",&n,&x);
	printf("Enter %d intergers£»",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	flag=0;
	for(i=0;i<n;i++){
		if(a[i]==x){
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("Not Found\n");
	}
	else{
		printf("index=%d\n",i);
	}
	return 0;
}




