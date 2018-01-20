#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include <3ds.h>

int main()
{
	bool isRunning = true;

	gfxInitDefault();
	
	consoleInit(GFX_TOP,NULL);
	
	printf("Hello World!");
	
	gfxFlushBuffers();
	
	while (isRunning && aptMainLoop()) {
		gspWaitForVBlank();
		hidScanInput();

		u32 kDown = hidKeysDown();

		if (kDown & KEY_START) 
			break;

		gfxFlushBuffers();

	}
}