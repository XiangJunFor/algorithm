#include <stdio.h>
#define  max 1024
//斐波那契数 当前数 为n-1加上n-2   从第三项开始 
int fib(int n){
	
 	return (n<3)?1: fib(n-1)+fib(n-2); 
 	                // 假如要推第5项  先推出第3和第4
			        //3=1+1  4=2+1
 	        
             
}

int Fibno2(int n)
{  //这个是循环遍历 100个数 全部存入 num 
	  int num[max],i;
	  num[1]=1;
      num[2]=1;
	  for(i=3;i<max;i++){
	  	num[i]=num[i-1]+num[i-2]; //例如 3= num1 +num2   
	  }
	  return num[n];
    
}



int main(){
      
      int n,j;
      scanf("%d",&n);
       //j=fib(n); 
      // printf("%d",j);
      j=Fibno2(n);
      printf("%d",j);
     
	return 0; 
	
	
} 
