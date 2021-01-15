#include<stdio.h>
#include<Windows.h>

__declspec(dllexport) ULONGLONG GetFreeMemory(char* path)
{
	ULARGE_INTEGER ulFree;
	ULARGE_INTEGER a;
	ULARGE_INTEGER b;
	GetDiskFreeSpaceExA(path, &a, &b, &ulFree);
	ULONGLONG freeSpace = ulFree.QuadPart;

	return freeSpace;
}