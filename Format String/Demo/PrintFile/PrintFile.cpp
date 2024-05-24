#include <stdio.h>
#include <string.h>
#include <conio.h>

main()
{
	FILE * pFile;
	long lSize;
	char buffer[10000];
	size_t result;

	pFile = fopen ("FileFS.txt","rb");
	if (pFile==NULL)
	{
		printf("can't open file FileFS.txt");
		return 0;
	}

	fseek (pFile , 0 , SEEK_END);
	lSize = ftell (pFile);
	rewind (pFile);
		
	result = fread (buffer,1,lSize,pFile);
			
	printf(buffer);
	getch();
}

