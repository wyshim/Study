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
	

	/*
	int arr[2][3];
	std::cout << arr[0] << " " << &arr[0][0] << std::endl;
	// �Ϲ������� Ÿ�� ��ȯ �� ���� ������ ����
	std::cout << sizeof(arr[0]) << " " << sizeof(arr[0][0]) << " " << sizeof(arr);
	//arr[0], arr[1] �� int* ���� �� : arr[x][y] ������ *(arr[x]+y) �ϱ� arr[x]�� �����Ͱ� �ȴ�
	*/
	

	int arr[2][3] = { {1,2,3}, {4,5,6} };
	// int** parr;
	// parr = arr;
	int(*parr)[3] = arr;

	std::cout << arr << " " << arr + 1 << std::endl;
	// �޸� �ּ� 12����Ʈ ���� arr�� arr[0][0], arr+1�� arr[1][0]�ּ� Ÿ�Ժ�ȯ

	std::cout << arr[1][1] << " " << parr[1][1];

	return 0;
}