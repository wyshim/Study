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
/*
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
*/
/*
class book
{
public:
	book() {};
	book(char* n_title, char* n_name, char* n_publish)
	{
		while (*n_title)
		{
			*title = *n_title;
			++n_title;
		}
		while (*n_name)
		{
			*name = *n_name;
			++n_name;
		}
		while (*n_publish)
		{
			*publish = *n_publish;
			++n_publish;
		}
	}

	bool find(char* f_title)
	{
		while (*f_title)
		{
			if (*title != *f_title) return false;
			++f_title;
			++title;
		}
		return true;
	}

	char* title;
	char* name;
	char* publish;
};

int main()
{
	book Book[100];
	

	return 0;
}
*/

int function()
{
	static int how_many_called = 0;
	++how_many_called;
	std::cout << "function called : " << how_many_called << std::endl;
	return 0;
}

int main()
{
	function();
	function();
	function();
	function();
	function();
	function();
	return 0;
}



























