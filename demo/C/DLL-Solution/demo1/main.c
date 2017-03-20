
#include "demo1.h"
#include <windows.h>
#include <stdlib.h>
#include<math.h>


 __declspec(dllexport) int add(int a, int b){
	return a + b;
}
 __declspec(dllexport) void GetMyValue(int *len,int *num,char *str)
 {
	 char strNum[4];
	 char myString[512];
	 int length = 20;
	 *len = length;
	 for (int i = 0; i < length; i++)
	 {
		 num[i] = i;
	 }
	 memset(myString, '\0', 512);
	 itoa(length, strNum, 10);
	 strcat(myString, "this array length is ");
	 strcat(myString, strNum);
	 strcpy(str, myString);
	 
 }