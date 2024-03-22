#pragma once

void PrintHello();

template <class T>
class LinkerTest
{
public:
	void PrintHello();
};

#include "LinkerTest.inl"
