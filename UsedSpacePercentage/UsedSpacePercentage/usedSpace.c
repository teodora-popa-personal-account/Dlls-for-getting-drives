#include<Windows.h>

__declspec(dllexport) double GetUsedSpacePercentage(char* path)
{
	ULARGE_INTEGER ulTotal;
	ULARGE_INTEGER ulFree;
	ULARGE_INTEGER ulFreeForUser;
	GetDiskFreeSpaceExA(path, &ulFreeForUser, &ulTotal, &ulFree);
	return ((double)((ulTotal.QuadPart - ulFree.QuadPart) * 100) / (double)ulTotal.QuadPart);
	//return 2.3;
}