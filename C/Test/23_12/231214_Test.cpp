#include <iostream>

bool is_prime_number(int x)
{
	for (int i = 2; i<int(sqrt(x)); i++)
	{
		if (x % i == 0) return false;
	}
	return true;
}
int main()
{
	int temp;
	std::cin >> temp;
	int num = temp;
	std::string result = "";
	for (char i = 2; i <= temp; i++)
	{
		if (is_prime_number(i) && temp % i == 0)
		{
			result += i + '0';
			result += " * ";
			temp /= i;
			--i;
		}
	} 
	std::cout << num << " = " + result.substr(0, result.length()-2);
	
}