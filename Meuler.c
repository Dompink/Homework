#include<stdio.h>
#include<math.h>
/*
Author:Dompink
�Ľ���ŷ�������ɱ�ʾΪ 
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
	printf("��������2ʱ��������Ϊ0.5��ֵΪ%lf\n",Meuler(2));
	printf("��������4ʱ��������Ϊ0.25��ֵΪ%lf\n",Meuler(4));
	printf("��������8ʱ��������Ϊ0.125��ֵΪ%lf\n",Meuler(8));
	return 0;
 } 
