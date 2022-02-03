#include <stdio.h>
#define max 20
/*
给定一个n×m矩阵相乘，求它的转置。其中1≤n≤20，1≤m≤20，矩阵中的每个元素都在整数类型（4字节）的表示范围内。

输入格式

第一行两个整数n和m；

第二行起，每行m个整数，共n行，表示n×m的矩阵。数据之间都用一个空格分隔。

输出格式

共m行，每行n个整数，数据间用一个空格分隔，表示转置后的矩阵。

样例输入
  2 4
34 76 -54 7
-4 5 23 9
样例输出

34 -4
76 5
-54 23
7 9 

*/
int main(){
	//其实就是行列转换 
	int arr[max][max];
	int n=0;
	int m=0;
	int i,j;
	scanf("%d %d",&n,&m);
	
	printf("输入案例\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			
			scanf("%d",&arr[i][j]);
		}
	} 
	printf("输出案例\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d  ",arr[j][i]);
		}
		printf("\n");
	}
	 
	
	return 0;
	
} 
