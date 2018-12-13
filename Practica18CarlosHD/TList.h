#pragma once

#include "ITest.h"

class TList
{

public:
	TList();

	int Size();
	int Push(const ITest * psz);
	const ITest * First();
	const ITest * Next();
	const ITest * Pop();
	void Reset();

	~TList();

private:
	void *m_data;
};