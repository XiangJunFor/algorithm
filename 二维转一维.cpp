#include <iostream>
#include <stdlib.h>
#include <stdio.h> 
using namespace std;
/*sizeof(a[0][0])Ϊһ��Ԫ��ռ�õĿռ䣬
sizeof(a[0])Ϊһ��Ԫ��ռ�õĿռ䣬
sizeof(a)Ϊ��������ռ�õĿռ�*/
int main(){
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	int row=sizeof(arr)/sizeof(arr[0]); //����
	int col=sizeof(arr[0])/ sizeof(arr[0][0]);
	
	int b[row *col];
	int i,j, cnt=0;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			b[cnt]=arr[i][j];
			cnt++;
		}
	}
	
	for(i=0;i<cnt;i++){
	
		 //	printf("%d  ",b[i]); 
		 cout<<b[i]<<" ";
		}
		 
	 
	
	system("pause");
	return 0;
}
