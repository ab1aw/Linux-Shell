//print current working directory
#include<stdio.h>
#include<unistd.h>
#include<dirent.h>
int main(int arg, char *argv[])
{
	char pwd[PATH_MAX];
	
	//getcwd copies the present working directory to the buffer cwd
	
	if(getcwd(pwd,PATH_MAX)!=NULL)
		printf("%s\n",pwd);
	else
		printf("Error retrieving present working directoy\n");
	return 0;
}
