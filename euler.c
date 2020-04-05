#include<stdio.h>
#include<math.h>
/*
Author:Dompink
欧拉方法可表示为 
w0=y0
w(i+1)=wi+hf(ti,wi)
*/

double func(double t,double w)
{
	double f;
    f=t*w+pow(t,3);
    return f;
}


int main()
{
	/*定义初始值*/
	int n,i;
	double h,ini,y;
	printf("请输入步长\n");
	scanf("%lf",&h);
	printf("请输入初始值\n");
	scanf("%lf",&ini);
	printf("请输入终值\n");
	scanf("%lf",&y);
	n=(y-ini)/h;
	double w[n+1],t[n+1];
	t[0]=0.0,w[0]=ini;
	
	for(i=0;i<=n;i++)
	{
		w[i+1]=w[i]+h*func(t[i],w[i]);
		t[i+1]=t[i]+h;
		printf("t%d=%lf\n",i+1,t[i+1]);
		printf("w%d=%lf\n",i+1,w[i+1]);
	}
	
	
	return 0;
 } 
