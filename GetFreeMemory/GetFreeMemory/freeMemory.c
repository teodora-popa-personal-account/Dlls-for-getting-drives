#include<stdio.h>
#include<Windows.h>

__declspec(dllexport) ULONGLONG GetFreeMemory(char* path)
{
	ULARGE_INTEGER ulTotal;
	ULARGE_INTEGER ulFree;
	ULARGE_INTEGER ulFreeForUser;
	GetDiskFreeSpaceExA(path, &ulFreeForUser, &ulTotal, &ulFree);
	return ulFree.QuadPart;
}