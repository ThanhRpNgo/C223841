#include <stdio.h>
#include <Windows.h>


HANDLE hReadpipe;
HANDLE hWritePipe;
WINAPI function(LPVOID lpThreadParameneter)
{
	int tempt = 0;
	while (1)
	{
		DWORD read = 0;
		ReadFile(hReadpipe, &tempt, sizeof(tempt), &read, 0);
		printf("[sub main]:Say hello \r\n");
		Sleep(1000);
	}
}

void main(LPVOID lpThreadParameneter)
{
	int count = 0;
	HANDLE thread = CreateThread(0, 128, function, 0, 0, 0);
	DWORD write = 0;

	CreatePipe(&hReadpipe, &hWritePipe, 0, 1024);
	while (1)
	{
		count++;
		DWORD write = 0;
		WriteFile(hWritePipe, &count, sizeof(count), &write, 0);
		printf("[main] : xin chao \r\n");
		Sleep(1500);
			 
	}

}