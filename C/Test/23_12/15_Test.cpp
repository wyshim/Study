#include <iostream>

void Swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int arr[5];
	int max;
	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}
	for (int i = 0; i < 4; i++)
	{
		max = arr[i];
		for (int j = i + 1; j < 5; j++)
		{
			if (max < arr[j])
			{
				max = arr[j];
				Swap(arr[i], arr[j]);
			}
		}
	}
	
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}