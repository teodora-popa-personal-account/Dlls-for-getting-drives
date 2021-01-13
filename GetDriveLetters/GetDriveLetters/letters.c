#include<stdio.h>
#include<Windows.h>

__declspec(dllexport) char** GetDriveLetters()
{
	DWORD logicalDrives = GetLogicalDrives();
	char* logicalDrivesLetters = (char*)malloc(27 * sizeof(char));
	strcpy_s(logicalDrivesLetters,27,"");

	if (logicalDrives != 0)
	{
		char firstChar = 'a';
		char offset = ' ';
		for (char count = 0; count < 26; count++)
		{
			if (logicalDrives & (1 << count))
			{
				char letter = firstChar + count - offset;
				char* letterString = (char*)malloc(2 * sizeof(char));
				letterString[0] = letter;
				letterString[1] = '\0';
				strcat_s(logicalDrivesLetters,27,letterString);
			}
		}
	}
	return logicalDrivesLetters;
}