#include<stdio.h>
#include<conio.h>
int main()
{
	FILE*fp;
	fp=fopen("fprintf&fscanf.txt","w");
	fprintf(fp,"this is example of fprintf() & fscanf()");
	fclose(fp);
	char buff[255];
	while(fscanf(fp,"%s",buff)!=EOF)
	{
		printf("%s",buff);
	}
	fclose(fp);
	return 0;
}
