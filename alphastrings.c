#include <stdio.h>
#include <string.h>

  int main()
  {
	char str1[27] = "a";
	for (char c = 'b'; c < '{'; c++)
	{
	  strncat(str1, &c,1);
	}

	char str2[] = "abcdefghijklmnopqrstuvwxyz";

	if (strcmp(str1, str2) == 0)
		printf("the strings are identical\n");
	else
		printf("the strings are different\n");

	for (int i = 0; i < 27; i++)
	{
	  str1[i] = str1[i] - 32;
	}


	if (strcmp(str1, str2) == 0)
		printf("the strings are identical\n");
	else
		printf("the strings are different\n");

	char str3[53];
	strcat(str3, str1);
	strcat(str3, str2);

	printf("String 1: %s\n", str1);
	printf("String 2: %s\n", str2);
	printf("String 3: %s\n", str3);
 }
