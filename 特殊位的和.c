#include <stdio.h>

/*С������λ�к��� 2��0��1��9 �����ֺܸ���Ȥ��������ǰ�� 0����

�� 1 �� 40 �������������� 1��2��9��10 �� 32��39 �� 40���� 28 �������ǵĺ��� 574��

���ʣ��� 1 �� n �У��������������ĺ��Ƕ��٣� */

int func(int a){
  int x;

     while(a){
      	x=a%10; 
     	if(x==2||x==0||x==1||x==9)
     	return 1;
     	a/=10;
     
     
     }
    return 0; 
}
//void  func2(int a){
//	int i,sum=0;
//	int x;
//	  for(i=1;i<=a;i++){
//	  	
//	  	 	 while(i){
//	  	 	 	if(i%10==2||i%10==0||i%10==1||i%10==9)
//	  	 	 	sum+=i;
//	  	 	 	break;
//	  	 	 	i/=10;
//	  	 	 	 printf("%d\n",sum);
//	  	 	 }
//			
//	  }
//	  //printf("%d\n",sum);
//	  
//}
int main(){
	int a=0,i,b=0;
	scanf("%d",&a);
    for(i=1;i<=a;i++){
    	if(func(i))b+=i;
    	printf("%d\n",b);
    }
	//  func2(a);
	return 0;
}
