#include <stdio.h>
#define  max 1024
//쳲������� ��ǰ�� Ϊn-1����n-2   �ӵ����ʼ 
int fib(int n){
	
 	return (n<3)?1: fib(n-1)+fib(n-2); 
 	                // ����Ҫ�Ƶ�5��  ���Ƴ���3�͵�4
			        //3=1+1  4=2+1
 	        
             
}

int Fibno2(int n)
{  //�����ѭ������ 100���� ȫ������ num 
	  int num[max],i;
	  num[1]=1;
      num[2]=1;
	  for(i=3;i<max;i++){
	  	num[i]=num[i-1]+num[i-2]; //���� 3= num1 +num2   
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
