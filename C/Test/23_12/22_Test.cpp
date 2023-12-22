#include <iostream>
/*
enum {MALE, FEMALE};
enum { SPRING, SUMMER};
int main()
{
	int i = 0;
	if (i == MALE) std::cout << "MALE";
	else if (i == FEMALE) std::cout << "FEMALE";
	if (i == SPRING) std::cout << "SPRING";
}
*/
int read_char(void* p, int byte)
{
	int* num_p;
	do
	{
		std::cout << std::hex << (int) *(char*)p << std::endl;
		--byte;

		p = (char*)p + 1;
	} while (p && byte);
	return 0;
}

int main()
{
	int arr[1] = { 0x12345678 };
	std::cout << std::hex << arr[0] << std::endl;
	read_char(arr, 4);
}