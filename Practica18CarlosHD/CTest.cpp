#include "stdafx.h"
#include "CTest.h"
#include <stdio.h>

CTest::CTest(int field)
{
	m_field = field;
}

ITest * CTest::Copy() const
{
	CTest * copy = new CTest(m_field);

	return copy;
}

int CTest::GetField() const
{
	return m_field;
}

CTest::~CTest()
{
	printf("\nDestructor ~CTest");
}