#include <stdio.h>
int main()
{
	int jiecheng=1;
	int n;
	printf("������׳�����");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		jiecheng*=i;
	}
	printf ("�׳˵Ľ����%d\n",jiecheng);
	return 0;
} 

