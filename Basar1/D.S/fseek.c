#include<stdio.h>
#include<conio.h>
int main()
{
	FILE*fp;
	fp=fopen("c:\\Basar1\\D.S.\\fseek.txt","r");
	if(fp==NULL)
	{
		printf("error");
		return 1;
	}
	char line[100];
	fseek(fp,3,SEEK_SET);
	fgets(line,sizeof(line),fp);
	printf("the 3rd line is %s",line);
	return 0;
}
