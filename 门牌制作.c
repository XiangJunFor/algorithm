#include <stdio.h>
#include <stdlib.h>

//����2020���е�2 

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
		temp=i;   //���������ж��� 
		while(temp){
			if(temp%10==2)count++; //���β��Ϊ2 
			 temp/=10;            // ��������λ���� 
			
		} 
		
	} 
	printf("%d\n",count);
	
	system("pause");
	return 0;
} 
