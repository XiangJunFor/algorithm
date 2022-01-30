#include <stdio.h>
#include <stdlib.h>

//遍历2020所有的2 

int func(){
	int i;
	int c=0;
	for(i=1;i<=2020;i++){
		if((i%10)==2){
		++c;}
		if((i%100/10)==2){
		++c;}
		if((i%1000/100)==2){
		++c;}
		if((i/1000)==2)++c;
	}
	return c;
} 

int main(){
	
	int temp;
	int i;
	int count=0;
	int sum;
   sum=func();
   printf("%d\n",sum);
	 for(i=1;i<=2020;i++){
		temp=i;   //序数等于判断数 
		while(temp){
			if(temp%10==2)count++; //抽出尾数为2 
			 temp/=10;            // 遍历其他位的数 
			
		} 
		
	} 
	printf("%d\n",count);
	
	system("pause");
	return 0;
} 
