#include "KvadrRiv.h"
#include "LinRiv.h"
#include <iostream>

using namespace std;

int main()
{
	LinRiv p(1, 2);
	cout << "koreni liniinoho rivniannia z koefitsientamy a=1, b=2: " << endl;
	cout << p.Koreni() << endl;

	KvadrRiv k(1, 4, 3);
	cout << "koreni kvadratnoho rivniannia z koefitsientamy a=1, b=4, c=3: " << endl;
	cout << k.Koreni() << endl;

	return 0;
}