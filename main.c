#include<stdio.h>

int main()
{
	int var1;
	char *pstr = (char *)malloc(1024);	

	var1 = var1 + 2;	

	printf("hello git, this is to test git!\n");
	
	memset(pstr, 0, 1024);

	free(pstr);

	printf("the pointer value of pstr is :%p\n", pstr);	

	return 0;
}
