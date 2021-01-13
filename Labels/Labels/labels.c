#include<stdio.h>
#include<Windows.h>

__declspec(dllexport) char* GetDriveLabel(char* localDrivePath)
{
	
	//char* result = (char*)malloc((2*MAX_PATH) * sizeof(char));
	//char* volumeNameBuffer = (char*)malloc((MAX_PATH+1) * sizeof(char));
	//strcpy_s(result, MAX_PATH + 1, "");
	////strcat_s(volumeNameBuffer, MAX_PATH + 1, localDrivePath);

	///*char* test= (char*)malloc((5) * sizeof(char));
	//strcpy_s(test, MAX_PATH+1,"");
	//strcat_s(test, MAX_PATH+1,"C:\\");
	//strcpy_s(volumeNameBuffer,MAX_PATH+1, "");*/
	//DWORD volumeSerialNumber;
	//DWORD maximumComponentLength;
	//DWORD fileSystemFlags;
	//char* fileSystemNameBuffer = (char*)malloc((MAX_PATH + 1) * sizeof(char));
	//GetVolumeInformationA("C:\\", volumeNameBuffer, MAX_PATH + 1, &volumeSerialNumber, &maximumComponentLength, &fileSystemFlags, fileSystemNameBuffer, MAX_PATH + 1);

	//return result;
	unsigned long  aa = MAX_PATH+1;
	char VolumeName[MAX_PATH+1];
	char FileSystemName[MAX_PATH+1];
	unsigned long  VolumeSerialNo;
	unsigned long  MaxComponentLength, FileSystemFlags;

	GetVolumeInformation("C:\\", VolumeName, 520, NULL,
		NULL, NULL,
		NULL, NULL);

	return VolumeName;
}