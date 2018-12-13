#pragma once


class ITest
{
public:
	virtual ITest * Copy() const =0;
	virtual int GetField() const = 0;

	virtual ~ITest();
};