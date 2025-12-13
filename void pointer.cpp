#include<stdio.h>
int main()
{
	int x=15;
	char ch='R';
	void*p;
	p=&x;
	printf("value of p=%d",*(int*)p);
	p=&ch;
	printf("\n value of p=%c",*(char*)p);
	return 0;
}
