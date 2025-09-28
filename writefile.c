#include <stdio.h>
int main ()
{
	FILE *file= fopen ("example.txt","w");
	if (file==NULL)
	{
		printf("Error opening file. \n");
		return 0;
	}
	fprintf(file,"Hello world \n");
	printf("Data written to file sucessfully.\n");
	fclose(file);
	return 0;
}
