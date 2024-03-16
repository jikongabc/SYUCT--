////1
//#include <stdio.h>
//#include <string.h>
//#define N 510
//char s1[N],s2[N];
//int main()
//{
//	int i,len;
//	double x,sum=0;
//	scanf("%lf",&x);
//	getchar();
//	gets(s1);
//	gets(s2);
//	
//	len=strlen(s1);
//	for(i=0;i<len;i++)
//		if(s1[i]==s2[i])
//			sum++;
//	if(sum/len>=x)
//		printf("yes\n");
//	else
//		printf("no\n");
//	return 0;
//}

//2
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char s[260], r[260];
//	scanf("%s",s);
//	int len = strlen(s);
//	for(int i = 0; i < len; ++i)
//	{
//		switch(s[i])
//		{
//			case 'A':
//				r[i] = 'T';
//				break;
//			case 'T':
//				r[i] = 'A';
//				break;
//			case 'G':
//				r[i] = 'C';
//				break;
//			case 'C':
//				r[i] = 'G';
//				break;
//		}
//	}
//	r[len] = '\0';
//	printf("%s",r);
//	return 0;
//}



////3
//#include<stdio.h>
//#include<string.h>
//int n,l;
//char s[25];
//int main()
//{
//    scanf("%d",&n);
//    for(int i=0;i<n;i++)
//    {
//        scanf("%s",s);
//        if(s[0]>='a'&&s[0]<='z')
//        s[0]-=32;
//        l=strlen(s);
//        for(int j=1;j<l;j++)
//        if(s[j]>='A'&&s[j]<='Z')
//        s[j]+=32;
//        puts(s);
//    }
//    return 0;
//}

//4
#include<stdio.h>
#include<string.h>
int main(){
	char ch[260];
	scanf("%s",ch);
	int count=0;
	for(int i=0;i<strlen(ch);i++){
		if(ch[i]>='0' && ch[i]<='9') count++;
	}
	printf("%d",count);
	return 0;
}


////5
//#include<stdio.h>
//#include<string.h>
//using namespace std;
//char a[10000];
//int main(){
//	int n;
//	scanf("%d",&n);
//	for(int i=1;i<=n;i++){
//		scanf("%s",&a);
//		int l=strlen(a);
//		if(a[0]>='a'&&a[0]<='z'){
//			a[0]-=32;
//		}
//		for(int i=1;i<l;i++){
//			if(a[i]>='A'&&a[i]<='Z'){
//				a[i]+=32;
//			}
//		}
//		printf("%s\n",a);
//	}
//	return 0;
//}
