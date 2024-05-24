#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

DWORD CenException()
{
      puts("\r\nException....");
      ExitProcess(1);
      return 0;
}

void ham()
{
	FILE * pFile;
	long lSize;
	char buffer[10000];

	size_t result;

	pFile = fopen ("FileFS.txt","rb");
	if (pFile==NULL)
	{
		printf("can't open file FileFS.txt");
		return;
	}

	fseek (pFile , 0 , SEEK_END);
	lSize = ftell (pFile);
	rewind (pFile);
		
	result = fread (buffer,1,lSize,pFile);
	buffer[result]=\0;	
	
	__try{		
		printf(buffer);
	} // __try
	__except(CenException()){
		ExitProcess(1);
	}
}

main()
{
	/*
		HeapAlloc(HeapCreate(0x00040000,100000,2000000),0,1000000);
		HeapAlloc(HeapCreate(0x00040000,100000,2000000),0,1000000);
		HeapAlloc(HeapCreate(0x00040000,100000,2000000),0,1000000);
		HeapAlloc(HeapCreate(0x00040000,100000,2000000),0,1000000);
		HeapAlloc(HeapCreate(0x00040000,100000,2000000),0,1000000);
		HeapAlloc(HeapCreate(0x00040000,100000,2000000),0,1000000);
		HeapAlloc(HeapCreate(0x00040000,100000,2000000),0,1000000);
		HeapAlloc(HeapCreate(0x00040000,100000,2000000),0,1000000);
		HeapAlloc(HeapCreate(0x00040000,100000,2000000),0,1000000);
		HeapAlloc(HeapCreate(0x00040000,100000,2000000),0,1000000);
		HeapAlloc(HeapCreate(0x00040000,100000,2000000),0,1000000);
		HeapAlloc(HeapCreate(0x00040000,100000,2000000),0,1000000);
		HeapAlloc(HeapCreate(0x00040000,100000,2000000),0,1000000);
		HeapAlloc(HeapCreate(0x00040000,100000,2000000),0,1000000);
		HeapAlloc(HeapCreate(0x00040000,100000,2000000),0,1000000);
		HeapAlloc(HeapCreate(0x00040000,100000,2000000),0,1000000);
		HeapAlloc(HeapCreate(0x00040000,100000,2000000),0,1000000);
		HeapAlloc(HeapCreate(0x00040000,100000,2000000),0,1000000);
		HeapAlloc(HeapCreate(0x00040000,100000,2000000),0,1000000);
		HeapAlloc(HeapCreate(0x00040000,100000,2000000),0,1000000);
		HeapAlloc(HeapCreate(0x00040000,100000,2000000),0,1000000);
		HeapAlloc(HeapCreate(0x00040000,100000,2000000),0,1000000);
		HeapAlloc(HeapCreate(0x00040000,100000,2000000),0,1000000);
		HeapAlloc(HeapCreate(0x00040000,100000,2000000),0,1000000);

	*/
	ham();
	getch();
}
