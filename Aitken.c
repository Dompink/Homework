#include <stdio.h>
#include<math.h>

void main()
{
	int n,k,h;
	double f,e;
	printf("������ڵ���Ŀ\n");
	scanf("%d",&n);
	double p[n][n];
	double x[n];
	double y[n]; 
	for(k=0;k<n;k++)
	{
		printf("������x%d��ֵ\n",k);
		scanf("%lf",&x[k]);
		printf("������y%d��ֵ\n",k);
		scanf("%lf",&y[k]);
	}
	printf("��������Ҫ���ֵ\n");
	scanf("%lf",&f);
	printf("��������Ҫ�ľ���\n");
	scanf("%lf",&e);
	
	h=1;
	for(k=h;k<n;k++)
	{
		p[h-1][k]=((f-x[k])*y[h-1])/(x[h-1]-x[k])+((f-x[h-1])*y[k])/(x[k]-x[h-1]);
	}
	if(fabs(p[h-1][h+1]-p[h-1][h])<e)
		{
			printf("����%d��",h);
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
				printf("����%d�Σ���������Ǵ�1��ʼ���Ĵ���\n",h);
				printf("%f",p[h-1][h]);
				break;
			}
		}
	}
	/*������е�pֵ*/
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
