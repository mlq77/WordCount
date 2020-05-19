#include<stdio.h>
#include<stdlib.h>
#include <string>
int  main(int argc,char* argv[])
{
	int i = 0, m = 0;
	char a[1000] = "\0";
	FILE* fp = fopen(argv[2], "r");
	while (!feof(fp))
	{
		fscanf(fp, "%c", &a[i]);
		if (a[i] == ' ' || a[i] == ',')
			m++;
		i++;

	}
	m = m + 1;
	fclose(fp);
	if(!strcmp(argv[1],"-c"))
	printf("×Ö·ûÊý=%d\n", i);
	if(!strcmp(argv[1],"-w"))
	printf("µ¥´ÊÊý=%d\n", m);
	return 0;
}