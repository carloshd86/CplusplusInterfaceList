#pragma once

#include "ITest.h"

class CTest : public ITest
{
public:
	CTest(int field);

	ITest * Copy() const;
	int GetField() const;

	~CTest();

private:
	int m_field;
};