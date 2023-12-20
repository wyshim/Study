#include <iostream>
/*
int Length(char* a)
{
	int i = 0;
	while (a[i])
	{
		++i;
	}
	return i;
}

int main()
{
	char str1[] = { "abc" };
	char str2[] = { "def" };
	if (str1 == "abc")
	{
		std::cout << "str1 == abc" << std::endl;
	}
	return 0;
}
*/

int Length(char* k)
{
	int i = 0;
	while (k[i])
	{
		++i;
	}
	return i;
}
int search(char* a, char* b)
{
	int i = 0;
	int temp = 0;
	while (a[i])
	{
		if (a[i] == *b)
		{
			for (int j = 0; j < Length(b); ++j)
			{
				if (a[i+j] != b[j])
				{
					temp = 0;
					break;
				}
				temp = 1;
			}
		}
		if (temp == 1) return i;
		++i;
	}
	return -1;
}

int main()
{
	char str1[] = "I_am_a_boy";
	char str2[] = "boy";
	std::cout << search(str1, str2);
	return 0;
}