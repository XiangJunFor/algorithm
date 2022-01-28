#include <stdio.h> 

int  func(int n,int k){
	
	if(k>0){
		k--;
		return n*func(n,k); 
	}
	
	return 1;
}
	
	
int main(){
      
      int n,j,k;
      scanf("%d",&n);
      scanf("%d",&k);
      j=func(n,k);
    printf("%d",j);
	return 0; 
	
	
} 
