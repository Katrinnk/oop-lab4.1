#pragma once
#include "Abstract.h"
class LinRiv:public Abstract
{
public:
	LinRiv(void);
	LinRiv(int a, int b);
	~LinRiv(void);

	virtual bool Koreni();
};

