# include <stdio.h>

int main(void)
{
	int a, b, c;
	int t;
	printf("请输入三个数，并以空格分割\n");
	
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
	
	printf("从小到大排序为：%d %d %d\n", c, b, a);
	
	return 0;
	
}
