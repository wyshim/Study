#include <iostream>
#include <string>
#include "LinkerTest.h"
using namespace std;

class Person
{
public:
	Person() : name("name_none"), age(0) {}
	Person(string name, int age) : name(name), age(age) {}

	friend ostream& operator<< (ostream& os, Person& person);

	string GetName() { return name; }
	int GetAge() { return age; }

	//p1.ComboAttack()
	Person& ComboAttack()
	{
		cout << "Combo : " << ++combo_count << endl;

		//int* pa;
		//
		//int a = *pa;
		//
		//int& reference_a = *pa;

		return *this;
	}

private:
	string name;
	int age;
	int combo_count = 0;
};

//cout << p1
ostream& operator<< (ostream& os, Person& person)
{
	//os << "이름 : " << person.GetName() << endl;
	os << "이름 : " << person.name << endl;
	//os << "나이 : " << person.GetAge() << endl;
	os << "나이 : " << person.age << endl;

	return os;
}

int Test1();

//#include로 추가한 헤더는 전방선언의 의미이고 실제 include로 추가한 내용은
//파일 전체 내용이 복붙한 것처럼 처리됨

//프로그램은 main을 진입점으로 하여 함수가 있길 기대하고 작성된 코드들을 따라
//다른 obj 파일들을 찾아가며 실제 함수 호출을 한다. (이 때 실패하면 link error)

int main()
{
#pragma region LINKER_TEST
//PrintHello();
	Test1();
	LinkerTest<int> l;
	l.PrintHello();
#pragma endregion

#pragma region OPERATOR<<

	Person p0;
	Person p1("woojin", 28);

	cout << p1 << p1;

	p1.ComboAttack().ComboAttack().ComboAttack().ComboAttack();

#pragma endregion

	return 0;
}

int Test1()
{
	return 1;
}