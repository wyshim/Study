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
	//os << "�̸� : " << person.GetName() << endl;
	os << "�̸� : " << person.name << endl;
	//os << "���� : " << person.GetAge() << endl;
	os << "���� : " << person.age << endl;

	return os;
}

int Test1();

//#include�� �߰��� ����� ���漱���� �ǹ��̰� ���� include�� �߰��� ������
//���� ��ü ������ ������ ��ó�� ó����

//���α׷��� main�� ���������� �Ͽ� �Լ��� �ֱ� ����ϰ� �ۼ��� �ڵ���� ����
//�ٸ� obj ���ϵ��� ã�ư��� ���� �Լ� ȣ���� �Ѵ�. (�� �� �����ϸ� link error)

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