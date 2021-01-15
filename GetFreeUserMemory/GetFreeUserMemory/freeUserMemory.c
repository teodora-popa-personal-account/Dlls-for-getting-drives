#include<stdio.h>
#include<Windows.h>

__declspec(dllexport) ULONGLONG GetFreeUserSpace(char* path)
{
	ULARGE_INTEGER ulTotal;
	ULARGE_INTEGER ulFree;
	ULARGE_INTEGER ulFreeForUser;
	GetDiskFreeSpaceExA(path, &ulFreeForUser, &ulTotal, &ulFree);
	ULONGLONG freeForUser = ulFreeForUser.QuadPart;

	return freeForUser;
}