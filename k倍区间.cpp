#include <bits/stdc++.h>
/*给定一个长度为N的数列，A1, A2, … AN，如果其中一段连续的子序列Ai, Ai+1, … Aj(i <= j)
之和是K的倍数，我们就称这个区间[i, j]是K倍区间。

你能求出数列中总共有多少个K倍区间吗？*/
//有前缀和公式为 sum[j]-sum[i-1] 因为要求k的倍数 %K==0 
//那么就有 sum[j]%k==sum[i-1]%k 
#define max 1000
int num[max];
int sum[max];

int main(){
   int k,n,v,result=0;
   scanf("%d %d",&n,&k);
   for(int i=1;i<=n;i++){
   	  scanf("%d",&v);
   	  sum[i]=(sum[i-1]+v)%k; //求区间前缀和  1 3 6 10 15   
   }
   for(int i=0;i<=n;i++){
   	  result +=num[sum[i]]; // 得到 num[0] 和num[1]的值   也就是sum[j]%k==sum[i-1]%k 
   	  num[sum[i]]++;
   } 
   printf("%d\n",result); 
	
	getchar();
	return 0;
} 
