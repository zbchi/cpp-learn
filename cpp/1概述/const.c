#include <stdio.h>
const int a = 100;
void test()
{
	// a=200;//全局变量const不能直接修改
	int *p = (int *)&a;
	//*p=100;//全局变量const不能间接修改
	printf("%d\n", a);
}

int main()
{
	test();
	const int b = 20; // 栈区
	// b=200;局部的const不能直接修改
	int *p = (int *)&b;
	*p = 200; // 能间接修改
	printf("%d\n", b);
	return 0;
}
