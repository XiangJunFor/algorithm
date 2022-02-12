#include <stdio.h>
#include <stdlib.h>
/* 美国数学家维纳(N.Wiener)智力早熟，11岁就上了大学。他曾在1935~1936年应邀来中国清华大学讲学。

  一次，他参加某个重要会议，年轻的脸孔引人注目。于是有人询问他的年龄，他回答说：
 “我年龄的立方是个4位数。我年龄的4次方是个6位数。这10个数字正好包含了从0到9这10个数字，
 每个都恰好出现1次。”
 请你推算一下，他当时到底有多年轻。
*/
//思路: 可以大致推算他在10-30之间  因为  在大就超过4,6位数了.然后把每个数遍历 
int main(){
	int year,y1,y2,i;
	
	for(year=10;year<=30;year++){
		y1=year*year*year;
		y2=year*year*year*year;
		printf("他的年龄是%d\n: ",year); //显而易见是18 
		printf("%d\n ",y1);
		printf("%d\n ",y2);
	} 
	system("pause");
	return 0;
} 
