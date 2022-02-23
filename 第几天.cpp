#include <bits/stdc++.h>

/*2000年的1月1日，是那一年的第1天。
那么，2000年的5月4日，是那一年的第几天？
*/
 int arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int func(int year){
	 if(year%400==0||year/4==0&&year/100!=0) return 1;
	 return 0;	 	
}
int main(){
	
	int year ,moth,day,result=0;
	
	while(scanf("%d %d %d",&year,&moth,&day)!=EOF){
		for(int i=1;i<moth;i++){
			if(func) arr[2]=29;
			if(i==2){
			 result+=arr[i];
			 continue; 
		 }
	
		 	if(i%2==1){
			 result+=arr[i];
			 continue; 
		}
			if(i%2==0){
			result+=arr[i];
			continue; 
		} 	 
	} 
	printf("%d\n",result+day);
	
	getchar();
	return 0;
}
}
