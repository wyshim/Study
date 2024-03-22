#include <iostream>
#include <map>
using namespace std;

class MyIterator
{

};

class MapKey
{
public:
	MapKey(int key) : key(key) { }

	bool operator<(const MapKey& rhs) const
	{
		return key < rhs.key;
	}

	friend ostream& operator << (ostream& os, MapKey map_key);

	int operator+(ostream& os)
	{
		return 1;
	}

private:
	int key;
};

ostream& operator << (ostream& os, MapKey map_key)
{
	cout << map_key.key;
	return os;
}

void operator+(ostream& os, MapKey map_key)
{

}

int main()
{
#pragma region MAP_BASIC
	////map<MapKey, int> m;
	//map<string, int> m;

	//pair<string, int> p{"woo", 234};

	//m.insert(make_pair("shim", 123));
	//m.insert(p);
	//m.insert({"jin", 345});

	//cout << m["shim"];

	//m["shim"] = 123123;

	//cout << m["shim"];

	//if (m.find("shim") != m.end())
	//{
	//	cout << m["shim"];
	//}

	//for (auto ele : m)
	//{
	//	cout << ele.first << ' ' << ele.second << endl;
	//}

	//for (pair<string, int> ele : m)
	//{
	//	cout << ele.first << ' ' << ele.second << endl;
	//}

	//for (auto iter = m.begin(); iter != m.end(); iter++)
	//{
	//	cout << (*iter).first << ' ' << (*iter).second << endl;
	//}

	//for (map<string, int>::iterator iter = m.begin(); iter != m.end(); iter++)
	//{
	//	cout << (*iter).first << ' ' << (*iter).second << endl;
	//}

	//for (auto iter = m.rbegin(); iter != m.rend(); iter++)
	//{
	//	cout << (*iter).first << ' ' << (*iter).second << endl;
	//}
#pragma endregion

	map<MapKey, int> m1;

	MapKey mk(1);
	m1.insert({mk, 1});
	m1.insert({MapKey(3), 1});
	m1.insert({MapKey(5), 2});

	for (auto ele : m1)
	{
		cout << ele.first << ' ';
	}

	mk + cout;
	cout + mk;

	return 0;
}