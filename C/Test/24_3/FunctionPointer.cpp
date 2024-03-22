#include <iostream>
#include <vector>
using namespace std;

void HelloWorld()
{
	cout << "Hello World!" << endl;
}

void HelloWorldVersion2()
{
	cout << "Hello World Version2!" << endl;
}

void FunctionPointerUseAsParameter(void(*FuncPtr)())
{
	cout << "PreFunction Call!" << endl;
	FuncPtr();
	cout << "PostFunction Call!" << endl;
}

int main()
{
#pragma region BASIC
	//void(*FuncPtr)() = HelloWorld;
	//
	//FuncPtr();
	//
	//FuncPtr = HelloWorldVersion2;
	//
	//FuncPtr();
#pragma endregion

	//FunctionPointerUseAsParameter(HelloWorld);

#pragma region VECTOR_FUNCPTR
	//vector<void(*)()> Functions;
	//
	//Functions.push_back(HelloWorld);
	//Functions.push_back(HelloWorldVersion2);
	//Functions.push_back(HelloWorld);
	//Functions.push_back(HelloWorldVersion2);
	//Functions.push_back(HelloWorld);
	//Functions.push_back(HelloWorldVersion2);
	//
	//for (auto func : Functions)
	//{
	//	func();
	//}
#pragma endregion

#pragma region STATIC_ARRAY_FUNCPTR
	//void (*FuncPtr[4])();
	//
	//FuncPtr[0] = HelloWorld;
	//FuncPtr[1] = HelloWorldVersion2;
	//FuncPtr[2] = HelloWorld;
	//FuncPtr[3] = HelloWorldVersion2;
	//
	//for (int i = 0; i < 4; i++)
	//{
	//	FuncPtr[i]();
	//}
#pragma endregion

	//void (*func_ptr)();

	typedef void(*func_ptr)();
	using func_ptr_using = void(*)();

	func_ptr f = HelloWorld;
	func_ptr_using f2 = HelloWorldVersion2;

	f();
	f2();

	return 0;
}