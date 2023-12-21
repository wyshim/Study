#include <iostream>

int global_int = 3;
int main()
{
	int i = 0;
	const char* str = "Hi hello";
	char arr[20] = "Hi hello";

	printf("%p\n", str);
	std::cout << &global_int << " " 
		<< &i << " " << &arr;

	return 0;
}