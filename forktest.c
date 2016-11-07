#include<stdio.h>
#include<stdlib.h>
int pid;
int status=0;
int i,myself,dad;

int main()
{
for(i=1;i<=3;i++)
{
pid=fork();

if(pid!=0)
{
	//parent

	myself=getpid();
	printf("\nDad=%d\n",myself);
	pid=wait(&status);

}

	else
	{
	//child

	myself=getpid();//get from myself
	dad=getppid();//get from parent
	printf("son=%d Dad=%d\n",myself,dad);
	exit(status);
	}
}

}
