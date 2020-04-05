#include<stdio.h>
#include<math.h>
/*
Author:Dompink
改进的欧拉方法可表示为 
w0=y0
w(i+1)=wi+hf(ti,wi)
*/

double func(double t,double w)
{
	double f;
    f=4*t/w-t*w;
    return f;
}

double Meuler(int n)
{
	int i;
	double h,y0=3,tend=1.0,tini=0.0;
	h=(tend-tini)/n;
	double w[n+1],t[n+1];
	t[0]=0.0,w[0]=y0;
	
	for(i=0;i<=n;i++)
	{
		w[i+1]=w[i]+0.5*h*(func(t[i],w[i])+func((t[i]+h),(w[i]+h*func(t[i],w[i]))));
		t[i+1]=t[i]+h;
	}
	return w[n];
}


int main()
{	
	printf("网格数是2时，即步长为0.5，值为%lf\n",Meuler(2));
	printf("网格数是4时，即步长为0.25，值为%lf\n",Meuler(4));
	printf("网格数是8时，即步长为0.125，值为%lf\n",Meuler(8));
	return 0;
 } 
