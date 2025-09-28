#include <stdio.h>
int main ()
{
	FILE *file= fopen ("example.txt","a");
	if (file==NULL)
	{
		printf("Error opening file. \n");
		return 0;
	}
	fprintf(file,"My Name is vijendra pratap singh.\n");
	printf("Data written to file sucessfully.\n");
	fclose(file);
	return 0;
}
