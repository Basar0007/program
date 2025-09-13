#include<stdio.h>
#include<conio.h>
int main()
{
	FILE*file=fopen("file.txt","w");
	if(file==NULL)
	{
		printf("error opening file\n");
		return 1;
	}
	fprintf(file,"this is a file example");
	fclose(file);
	return 0;
}
