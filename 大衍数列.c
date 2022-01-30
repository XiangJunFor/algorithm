#include <stdio.h>
#include <stdlib.h>


/*大衍数列
中国古代文献中，曾记载过“大衍数列”, 主要用于解释中国传统文化中的太极衍生原理。

它的前几项是：0、2、4、8、12、18、24、32、40、50 …

其规律是：对偶数项，是序号平方再除2，奇数项，是序号平方减1再除2*/


int main(){
	
	//就是奇偶判断 
	int i;
	
	
	for(i=1;i<=100;i++){
		if(i%2==0){
			printf("%d\n",(i*i)/2);
		}else{
		
		printf("%d\n",(i*i-1)/2);
		}
		
	} 
	
	system("pause");
	return 0;
} 
