/*author：dompink*/
/*龙贝格积分*/
/*输入：被积分函数，a，b，h，n*/
/*输出：龙贝格表*/ 
/*切记幂函数不能直接用^，要用pow*/
#include<stdio.h>
#include<math.h>

double func(double x)
{
	double f;
    f=x/(4+pow(x,2));
    return f;
} 

int main()
{
	/*定义初始值*/
	double a,b,part=0.0;
	int k,j,i,n;
	printf("请输入这是几阶近似\n");
	scanf("%d",&n);
	printf("请输入积分区间初始值\n");
	scanf("%lf",&a);	
	printf("请输入积分区间最终值\n");
	scanf("%lf",&b);
	double r[n][n];
	double h[n];
	h[1]=b-a;
	for(i=2;i<=n;i++)
	{
		h[i]=h[i-1]/2;
	}	
	r[1][1]=(func(a)+func(b))*h[1]/2;
	
	
	for(j=2;j<=n;j++)
	{
		for(i=1;i<=(pow(2,j-2));i++)
		{
			part=part+func(a+(2*i-1)*h[j]);	
		}
		r[j][1]=r[j-1][1]/2+h[j]*part;
		part=0;
		for(k=2;k<=j;k++)
		{
			r[j][k]=(r[j][k-1]*(pow(4,k-1))-r[j-1][k-1])/((pow(4,k-1))-1);
		}
	}
	printf("%lf",r[n][n]);
	return 0;	
}
