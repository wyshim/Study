#include <iostream>
/*
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
*/

union A
{
	int i;
	char j;
};

int main()
{
	union A a;
	a.i = 0x12345678;
	printf("%x", a.j);
	return 0;
}
