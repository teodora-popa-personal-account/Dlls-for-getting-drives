#include<stdio.h>
#include<Windows.h>

__declspec(dllexport) char** GetDriveLabel(char** localDrivePath)
{
	char* volumeNameBuffer = (char*)malloc((MAX_PATH + 2) * sizeof(char));
	DWORD volumeSerialNumber;
	DWORD maximumComponentLength;
	DWORD fileSystemFlags;
	char fileSystemNameBuffer[MAX_PATH + 1];
	GetVolumeInformationA(localDrivePath, volumeNameBuffer, MAX_PATH + 1, &volumeSerialNumber, &maximumComponentLength, &fileSystemFlags, fileSystemNameBuffer, MAX_PATH + 1);
	return volumeNameBuffer;
}