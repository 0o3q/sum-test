// sum.cpp
#include "sum.h"

int sum(int n) {
	int res = 0;
	for(int i = 1l i <= n; ++i)
		res += i;
	return res;
}

