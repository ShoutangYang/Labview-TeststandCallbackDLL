// Test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <math.h>
#include <string.h>
#include <windows.h>
__declspec(dllexport) void GetMyValue(int *len, int *num, char *str)
{
	char strNum[4];
	char myString[512];
	int length = 20;
	*len = length;
	for (int i = 0; i < length; i++)
	{
		num[i] = i;

	}
	memset(myString, '\0',512);
	itoa(length, strNum, 10);
	strcat(myString, "this array length is ");
	strcat(myString, strNum);
	strcpy(str, myString);
	//strcat(str, strNum);

}

int _tmain(int argc, _TCHAR* argv[])
{
	char str[1024];
	int num[20];
	int lengt = 0;
	GetMyValue(&lengt,num,str);
	printf("the ;eng is %d\n", lengt);
	printf(str);
	return 0;
}

