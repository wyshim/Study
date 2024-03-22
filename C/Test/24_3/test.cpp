#include <iostream>
#include <vector>	//Standard Template Library
#include <algorithm>
using namespace std;

int triangle[10][10];

//functor, 연산자 오버로딩 ()
struct Compare
{
	bool operator() (int a, int b)
	{
		return a > b;
	}
};

struct Test
{
	void operator() ()
	{
		cout << "Hello World !";
	}
};

class A
{
	//암시적 멤버 메서드 6가지, 생성자...(+5개)

	//연산자 오버로딩 ? 다른 키워드

public:
	//int operator++ ()
	//{
	//	return a++;
	//}

	int operator++ (int temp)
	{
		return ++a;
	}

private:
	int a = 0;
};

int main() {

	/*vector<int> vec;

	vec.push_back(10);
	vec.push_back(5);
	vec.push_back(4);
	vec.push_back(20);
	vec.push_back(0);

	sort(vec.begin(), vec.end(), Compare());*/

	Test T;

	T();

	A a;
	a++;



	return 0;
}