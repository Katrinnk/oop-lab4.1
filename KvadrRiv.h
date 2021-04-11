#pragma once
#include "Abstract.h"
class KvadrRiv:public Abstract
{
	int c;
public: 
	KvadrRiv(void);
	KvadrRiv(int a, int b, int c);
	~KvadrRiv(void);

	virtual bool Koreni();
};

