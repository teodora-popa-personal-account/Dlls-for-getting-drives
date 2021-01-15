#include<stdio.h>
#include<Windows.h>

//__declspec(dllexport) ULONGLONG* GetTotalSpace(char* path)
//{
//	ULARGE_INTEGER ulTotal;
//	ULARGE_INTEGER ulFree;
//	ULARGE_INTEGER ulFreeForUser;
//	GetDiskFreeSpaceExA(path, &ulFreeForUser, &ulTotal, &ulFree);
//	ULONGLONG* arr = (ULONGLONG*)malloc(3 * sizeof(ULONGLONG));
//	arr[0] = ulTotal.QuadPart;
//	arr[1] = ulFree.QuadPart;
//	arr[2] = ulFreeForUser.QuadPart;
//	return arr;
//}

__declspec(dllexport) ULONGLONG GetTotalSpace(char* path)
{
	ULARGE_INTEGER ulTotal;
	ULARGE_INTEGER ulFree;
	ULARGE_INTEGER ulFreeForUser;
	GetDiskFreeSpaceExA(path, &ulFreeForUser, &ulTotal, &ulFree);
	ULONGLONG total = ulTotal.QuadPart;
	
	return total;
}