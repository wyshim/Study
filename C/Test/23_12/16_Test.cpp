#include <iostream>

int main()
{
	
	//int a, b;
	/*
	const int* pa;
	*pa = 3;
	pa = &b;
	*/
	/*
	int* const pa = &a;
	*pa = 2;
	//pa = &b;
	*/
	
	/*
	int arr[3] = { 1, 2, 3 };
	int(*parr)[3] = &arr;
	// int* par[3] = &arr; int& par = &arr;
	std::cout << arr[1] << " " << (*parr)[1] << std::endl;
	std::cout << arr << " " << parr << " " << &arr[0] << " " << &arr << std::endl;
	std::cout << sizeof(arr) << " " << sizeof(&arr[0]);
	// arr ��ü�� � �޸� ������ �����ϴ� ���� �ƴ�
	// arr�� parr�� Ÿ���� �ٸ�	
	*/
	

	
	int arr[2][3];
	std::cout << arr[0] << " " << &arr[0][0] << std::endl;
	// �Ϲ������� Ÿ�� ��ȯ �� ���� ������ ����
	std::cout << sizeof(arr[0]) << " " << sizeof(arr[0][0]);
	
	return 0;
}