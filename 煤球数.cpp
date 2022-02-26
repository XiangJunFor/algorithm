#include <bits/stdc++.h>

/*有一堆煤球，堆成三角棱锥型。具体：
               第一层放1个，
               第二层放3个，
               第三层放6个，
               第四层放10个，
               ……..............
            如果一共有100层，共有多少个煤球
————————————————
*/ 
//思路:这有个什么好说的等差数列 不会是吧 1加到100不会是吧 
int main(){
	int  result=0,i,temp=0;
    int arr[1000];
    int sum[1000];
	for(int i=1;i<=100;i++){
	//	result+=i; //得到第i层 煤球
//		temp+=result; //得到i层之前所有煤球 
        
        sum[i]=sum[i-1]+i;
        sum[i]+=sum[i+1]; 
       
        
	}
	printf("%d",sum[100]);
	
	getchar();
	return 0;
}
