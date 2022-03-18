#include <bits/stdc++.h>
using namespace std;
/*
1/1 + 1/2 + 1/4 + 1/8 + 1/16 + … 每项是前一项的一半，如果一共有 20 项,
求这个和是多少，结果用分数表示出来。
类似：3/2，当然，这只是加了前2项而已。分子分母要求互质。
*/
// 思路 : 已知要求求 a/b   就是单纯找规律 
int main(){
	int a=1,b=1;
	for(int i=1;i<=20;i++){
		a=a*2+1;
		b*=2;
		
	}
	  
	  printf("%d  / % d",a,b);
	
	getchar();
	return 0;
} 
