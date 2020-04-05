#include <stdio.h>
#include<math.h>

void main()
{
	int n,k,h;
	double f,e;
	printf("请输入节点数目\n");
	scanf("%d",&n);
	double p[n][n];
	double x[n];
	double y[n]; 
	for(k=0;k<n;k++)
	{
		printf("请输入x%d的值\n",k);
		scanf("%lf",&x[k]);
		printf("请输入y%d的值\n",k);
		scanf("%lf",&y[k]);
	}
	printf("请输入想要求的值\n");
	scanf("%lf",&f);
	printf("请输入想要的精度\n");
	scanf("%lf",&e);
	
	h=1;
	for(k=h;k<n;k++)
	{
		p[h-1][k]=((f-x[k])*y[h-1])/(x[h-1]-x[k])+((f-x[h-1])*y[k])/(x[k]-x[h-1]);
	}
	if(fabs(p[h-1][h+1]-p[h-1][h])<e)
		{
			printf("迭代%d次",h);
			printf("%f",p[h-1][h]);
		}
	else
	{
		for(h=2;h<n;h++)
		{
			for(k=h;k<n;k++)
			{
				p[h-1][k]=((f-x[k])*p[h-2][h-1])/(x[h-1]-x[k])+((f-x[h-1])*p[h-2][k])/(x[k]-x[h-1]);
			}
			if(fabs(p[h-1][h+1]-p[h-1][h])<e)
			{
				printf("迭代%d次，这个次数是从1开始数的次数\n",h);
				printf("%f",p[h-1][h]);
				break;
			}
		}
	}
	/*算出所有的p值*/
	/*h=1;
	for(k=h;k<n;k++)
	{
		p[h-1][k]=((f-x[k])*y[h-1])/(x[h-1]-x[k])+((f-x[h-1])*y[k])/(x[k]-x[h-1]);
	}
	for(h=2;h<n;h++)
	{
		for(k=h;k<n;k++)
		{
			p[h-1][k]=((f-x[k])*p[h-2][h-1])/(x[h-1]-x[k])+((f-x[h-1])*p[h-2][k])/(x[k]-x[h-1]);
		}
	}*/
	
	
	return 0;
}
