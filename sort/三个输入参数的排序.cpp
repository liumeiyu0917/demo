# include <stdio.h>

int main(void)
{
	int a, b, c;
	int t;
	printf("�����������������Կո�ָ�\n");
	
	scanf("%d %d %d", &a, &b, &c);
	
	if (b > a)
	{
		t = b;
		b = a;
		a = t;
	}
	
	if (c > a)
	{
		t = c;
		c = a;
		a = t;		
	}
	
	if (c > b)
	{
		t = c;
		c = b;
		b = t;			
		
	} 
	
	printf("��С��������Ϊ��%d %d %d\n", c, b, a);
	
	return 0;
	
}
