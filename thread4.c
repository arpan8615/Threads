#include<stdio.h>
#include<stdlib.h>
extern char **environ;
int main()
{

printf("\n Enviornment variable passed are:\n");
for(int i=0;environ[i]!=NULL;i++)
	printf("environ[%d]:%s\n",i,environ[i]);

return 0;
}

