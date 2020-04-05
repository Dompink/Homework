/***************/
/*
author:Dompink
变步长梯形法求积分 
参数说明，fa，第一个值为a，函数值fb，最后一个值b，函数值fb，S1是区间拟合 ，h是b-a 

*/
#include<stdio.h>
#include<math.h>

void main()
{
	double fa,fb,h,S1,p,s,x,t;
	int n,k;
	n=1;h=b-a;
	S1=h*(fa+fb)/2.0;
	p=eps+1.0;
	while(p>=eps)
	{
		s=0.0;
		for(k=0;k<=n-1;k++)
		{
			x=a+(k+0.5)*h;
		}
	 } 
}
