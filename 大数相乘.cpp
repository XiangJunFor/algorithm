#include <bits/stdc++.h>

/*当两个比较大的整数相乘时，可能会出现数据溢出的情形。为避免溢出，
剋采用字符串的方法来实现两个大数之间的乘法。
具体来说，首先以字符串的形式输入两个整数，每个整数的长度不会超过8位，
然后把它们相乘的结果存储在另一个字符串当中（长度不会超过16位），
最后把这个字符串打印出来。例如，假设用户输入为：62773417 和 12345678，
则输出结果为：774980393241726
*/ 
void func(int x,int y,int r[]){
	int base=10000;
	int x2=x/base; //x首 
	int x1=x%base; //x尾 
	int y2=y/base;
	int y1=y%base;
	
	int n1=x1*y1;
	int n2=x1*y2;
	int n3=x2*y1;
	int n4=x2*y2;
	
	r[3]=n1%base;//提取最后一位
	r[2]= n1/base+n2%base+n3%base; //n1头+n2 n3 尾
	r[1]=n2/base +n3/base+n4%base; //n1 n3 头 n4尾 
	r[0]=n4/base;                  //n4 头 
	
	r[1]+=r[2]/base;          //r1要加上后面进位的数
	r[2]=r[2]%base;           //r2为进位后的余数
	r[0]+=r[1]/base;          //加上r1的进位
	r[1]=r[1]%base;           //r1的余数	
		
}

int main(){
	
	int x[]={0,0,0,0};
	int a,b;
//	scanf("%d %d",&a ,&b);
	func(62773417,12345678,x);
	printf("%d%d%d%d",x[0],x[1],x[2],x[3]);
	
	getchar();
	return 0;
} 
