#include<stdio.h>
int main()
{
	FILE *file = fopen("expect.txt", "w");
	if(file == NULL)
	{
		printf("error opening file.\n");
		return 1;
	}
	fprintf(file,"Hello World\n");
	printf("Data written to file successfully.\n");
	fclose(file);
	return 0;
}
