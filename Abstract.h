#pragma once
class Abstract
{
	int a, b;
public:
	Abstract(void);
	Abstract(int a, int b);

	int getA() { return a; }
	int getB() { return b; }

	~Abstract(void);

	virtual bool Koreni() = 0;
};

