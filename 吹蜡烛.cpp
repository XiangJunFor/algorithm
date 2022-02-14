#include <bits/stdc++.h> 

/*某君从某年开始每年都举办一次生日party，并且每次都要吹熄与年龄相同根数的蜡烛。

现在算起来，他一共吹熄了236根蜡烛。

请问，他从多少岁开始过生日party的？

请填写他开始过生日party的年龄数。
注意：你提交的应该是一个整数，不要填写任何多余的内容或说明性文字
*/

//思路: 因为他是连续的 那么可以  1<x<y<100  x为开始年龄 y为现在年龄 
int main(){
	int i;
	for(i=1;i<=100;i++){
		int sum=0;
	   int	age=i;  
		while(sum<236) { //利用枚举方法把i的值遍历 得到只有26 sum==236   
			sum+=age;
			age++;        //26+...34==236
		}
		if(sum==236){
		printf("现在年龄%d\n",age);
		 printf("%d\n",i);
		}
		
	} 
	
	
	getchar();
	return 0;
}
