#include <iostream>
#include <string.h>
 /*
int main()
{
	char data[100];
	FILE* fp;
	fopen_s(&fp, "some_data.txt", "+r");

	if (fp == NULL)
	{
		std::cout << "ÆÄÀÏ ¿­±â ¿À·ù\n";
		return 0;
	}

	fputs("this is a man and this is a woman, and that is a boy", fp);
	fflush(fp);

	while (fscanf_s(fp, "%s", data) != NULL)
	{
		if (strcmp(data, "this") == 0)
		{
			fseek(fp, -(long)strlen("this"), SEEK_CUR);
			fputs("that", fp);
			fflush(fp);
		}
	}

	fclose(fp);

	return 0;
}
*/

int main()
{
	/*
	int a = 6;
	if (a & 1)
	{
		std::cout << "È¦¼ö";
	}
	else { std::cout << "Â¦¼ö"; }
	*/
	/*
	int a = 9;
	a >>= 3;
	std::cout << a;
	*/
	int k = 255;
	int one_bit = 0;
	while (k != 0)
	{
		if (k & 1) ++one_bit;
		if (k & 2) ++one_bit;
		if (k & 4) ++one_bit;
		if (k & 8) ++one_bit;
		k >>= 4;
	}
	std::cout << one_bit;
	return 0;	
}