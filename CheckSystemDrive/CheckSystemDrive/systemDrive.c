#include<stdio.h>
#include<Windows.h>

__declspec(dllexport) int IsSystemDrive(char* path)
{
	char* systemDriveName = NULL;
	size_t systemDriveNameSize = 0;
	if (_dupenv_s(&systemDriveName, &systemDriveNameSize, "SystemDrive") == 0 && systemDriveName != NULL)
	{
		if (systemDriveName[0] == path[0])
		{
			return 1;
		}
		free(systemDriveName);
	}

	return 0;
}