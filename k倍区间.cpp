#include <bits/stdc++.h>
/*����һ������ΪN�����У�A1, A2, �� AN���������һ��������������Ai, Ai+1, �� Aj(i <= j)
֮����K�ı��������Ǿͳ��������[i, j]��K�����䡣

��������������ܹ��ж��ٸ�K��������*/
//��ǰ׺�͹�ʽΪ sum[j]-sum[i-1] ��ΪҪ��k�ı��� %K==0 
//��ô���� sum[j]%k==sum[i-1]%k 
#define max 1000
int num[max];
int sum[max];

int main(){
   int k,n,v,result=0;
   scanf("%d %d",&n,&k);
   for(int i=1;i<=n;i++){
   	  scanf("%d",&v);
   	  sum[i]=(sum[i-1]+v)%k; //������ǰ׺��  1 3 6 10 15   
   }
   for(int i=0;i<=n;i++){
   	  result +=num[sum[i]]; // �õ� num[0] ��num[1]��ֵ   Ҳ����sum[j]%k==sum[i-1]%k 
   	  num[sum[i]]++;
   } 
   printf("%d\n",result); 
	
	getchar();
	return 0;
} 
