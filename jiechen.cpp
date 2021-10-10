#include <stdio.h>
int main()
{
	int jiecheng=1;
	int n;
	printf("请输入阶乘数：");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		jiecheng*=i;
	}
	printf ("阶乘的结果：%d\n",jiecheng);
	return 0;
} 

