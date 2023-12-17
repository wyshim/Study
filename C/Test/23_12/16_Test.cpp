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
	// arr 자체는 어떤 메모리 공간에 존재하는 것은 아님
	// arr과 parr의 타입은 다름	
	*/
	

	/*
	int arr[2][3];
	std::cout << arr[0] << " " << &arr[0][0] << std::endl;
	// 암묵적으로 타입 변환 시 같은 것으로 변함
	std::cout << sizeof(arr[0]) << " " << sizeof(arr[0][0]) << " " << sizeof(arr);
	//arr[0], arr[1] 는 int* 형이 됨 : arr[x][y] 연산이 *(arr[x]+y) 니까 arr[x]는 포인터가 된다
	*/
	

	int arr[2][3] = { {1,2,3}, {4,5,6} };
	// int** parr;
	// parr = arr;
	int(*parr)[3] = arr;

	std::cout << arr << " " << arr + 1 << std::endl;
	// 메모리 주소 12바이트 차이 arr는 arr[0][0], arr+1은 arr[1][0]주소 타입변환

	std::cout << arr[1][1] << " " << parr[1][1];

	return 0;
}