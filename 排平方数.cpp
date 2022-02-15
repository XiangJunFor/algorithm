#include <bits/stdc++.h>

/*小明正看着 203879 这个数字发呆，原来，203879 * 203879 = 41566646641，
这有什么神奇呢？

仔细观察，203879 是个6位数，并且它的每个数位上的数字都是不同的，
并且它平方后的所有数位上都不出现组成它自身的数字。

具有这样特点的6位数还有一个，请你找出它！
*/
// tmd懒得想了 暴力吧 


int main(){
	
	  long long  sum ,num;
	  int a ,b,c,d,e,f,x,y;
	  for(a=1;a<10;a++){
	  	for(b=0;b<10;b++){
	  		for(c=0;c<10;c++){
	  			for(d=0;d<10;d++){
	  				for(e=0;e<10;e++){
	  					for(f=0;f<10;f++){
	  						if(a!=b&&a!=c&&a!=d&&a!=e&&a!=f&&b!=c&&b!=d
							  &&b!=e&&b!=f&&c!=d&&c!=e&&c!=f&&d!=e&&d!=f&&e!=f){  
	  						  //千万不要忘记判断 
	  						num=a*100000+b*10000+c*1000+d*100+e*10+f;
							 sum=num*num;
							 x=0;   //判断是否为符合条件的num 
							 while(sum){
							  y= sum%10;
						  if(y==a||y==b||y==c||y==d||y==e||y==f){
						  	 x=1;
						  	 break ;
						   }  
						      sum/=10;
							 }
						   if(x==0) 
						   printf("%164d\n",num);
					}
	  					}
	  				}
	  			}
	  		}
	  	}
	  		
	  }

	getchar();
	return 0;	
} 
