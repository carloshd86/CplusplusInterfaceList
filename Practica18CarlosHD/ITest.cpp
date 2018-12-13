#include "stdafx.h"
#include "ITest.h"
#include <stdio.h>

ITest::~ITest()
{
	printf("\nDestructor ~ITest");
}