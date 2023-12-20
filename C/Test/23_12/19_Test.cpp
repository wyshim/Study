#include <iostream>

void pswap(int** pa, int** pb)
{
	int* temp = *pb;
	*pb = *pa;
	*pa = temp;
}

int Length(char* a)
{
	int i = 0;
	while (a[i])
	{
		i++;
	}
	return i;
}

bool isequal(char* a, char* b)
{
	if (Length(a) == Length(b))
	{
		for (int i = 0; i < Length(a); i++)
		{
			if (a[i] != b[i]) return false;
		}
	}
	return true;
}

int max(int, int);
int main()
{
	/*
	int a=2, b;
	int *pa, *pb;
	int** ppa, ** ppb;
	pa = &a;
	pb = &b;
	ppa = &pa;
	ppb = &pb;
	//std::cout << pa << " " << pb << std::endl;
	//pswap(&pa, &pb);
	//std::cout << pa << " " << pb << std::endl;
	std::cout << ppa << " " << &pa << std::endl;
	std::cout << *ppa << " " << pa << std::endl;
	std::cout << **ppa << " " << *pa << std::endl;
	*/

	/*
	int a=10, b=20;
	int (*pmax)(int, int); // 함수 포인터
	pmax = max; 
	
	std::cout << max(a, b) << " " << pmax(a, b);
	return 0;
	*/

	/*
	char a, b, c;
	a = 100;
	b = 300;
	c = a + b;
	std::cout << (int)a << " + " << (int)b << " = " << (int)c;
	*/

	/*
	char word[30] = { "long sentence" };
	char* str = word;
	std::cout << str << std::endl;
	int a[5] = {1,2,3,4,5};
	int* b = a;
	std::cout << b;
	*/

	
	char str_a[] = "abc";
	char str_b[] = "abc";

	if (isequal(str_a, str_b))
	{
		std::cout << "equal";
	}

	return 0;
}

int max(int a, int b)
{
	if (a > b) return a;
	else return b;
}