#include <iostream>
enum {MALE, FEMALE};
enum { SPRING, SUMMER};
int main()
{
	int i = 0;
	if (i == MALE) std::cout << "MALE";
	else if (i == FEMALE) std::cout << "FEMALE";
	if (i == SPRING) std::cout << "SPRING";
}