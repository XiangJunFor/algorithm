#include <stdio.h>
/*在X星系的广袤空间中漂浮着许多X星人造“炸弹”，用来作为宇宙中的路标。
每个炸弹都可以设定多少天之后爆炸。
比如：阿尔法炸弹2015年1月1日放置，定时为15天，则它在2015年1月16日爆炸。
有一个贝塔炸弹，2014年11月9日放置，定时为1天，请你计算它爆炸的准确日期。

请填写该日期，格式为 yyyy-mm-dd 即4位年份2位月份2位日期。比如：2015-02-19
请严格按照格式书写。不能出现其它文字或符号
*/
//闰年判断 
int year=0,moth=0,day=0,n=0; 
int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};//月份日子 
int Leapyear (int year){   
	if(year%400==0||(year%4==0&&year%100!=0))return 1;
	 else return 0;
}

int main(){
	


	
	while(scanf("%d %d %d %d",&year,&moth,&day,&n)!=EOF){
	
	while(n--){
			
		if(Leapyear(year))mon[2]=29;day++;  //如果是闰年 2月为29 
		if(day>mon[moth]) day=1,moth++;         //day>moth 重置day 月份加一 
		if(moth==13)moth=1,year++;
	    mon[2]=28;   //恢复正常年 
		
	}
	printf("%d-%02d-%02d",year,moth,day); 
}
	return 0;
} 
