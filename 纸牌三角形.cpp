#include <bits/stdc++.h>

/*    A,2,3,4,5,6,7,8,9 共9张纸牌排成一个正三角形（A按1计算）。要求每个边的和相等。
    下图就是一种排法（如有对齐问题，参看p1.png）。

          A
         9 6
        4   8
       3 7 5 2

    这样的排法可能会有很多。

    如果考虑旋转、镜像后相同的算同一种，一共有多少种不同的排法呢？

    请你计算并提交该数字。

    注意：需要提交的是一个整数，不要提交任何多余内容。
*/
//思路 : 这个题目网上资料显示可用全排列 或者暴力破解 ,但是我看了会,决定用暴力破解
//首先 :利用循环嵌套把每个数遍历出来 然后判断三边是否相等(把每一个数的相同部分判断掉,
// A=abcd  =B=defg =C= ghia
//并且 旋转三种 镜像二种 所以最后还要/6 
int main(){
	
	int count=0;
	for(int a=1;a<10;a++){
		for(int b=1;b<10;b++){
			for(int c=1;c<10;c++){
				for(int d=1;d<10;d++){
					for(int e=1;e<10;e++){
						for(int f=1;f<10;f++){
							for(int g=1;g<10;g++){
								for(int h=1;h<10;h++){
									for(int i=1;i<10;i++){
										if(a!=b&&a!=c&&a!=d&&a!=e&&a!=f&&a!=g&&a!=h&&a!=i){
											if(b!=c&&b!=d&&b!=e&&b!=f&&b!=g&&b!=h&&b!=i){
												if(c!=d&&c!=e&&c!=f&&c!=g&&c!=h&&c!=i){
													if(d!=e&&d!=f&&d!=g&&d!=h&&d!=i){
														if(e!=f&&e!=g&&e!=h&&e!=i){
															if(f!=g&&f!=h&&f!=i){
																if(g!=h&&g!=i){
																	if(h!=i){//a==b && a==c &&b==c 
												  					   if(a+b+c+d==d+e+f+g&&a+b+c+d==g+h+i+a&&d+e+f+g==g+h+i+a){
												  					   	count++;
												  					   }	
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	printf("%d\n",count/6);
	
	getchar();
	return 0;
}
