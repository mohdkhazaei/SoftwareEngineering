
#include "Header.h"




int add(int a, int b)
{
    int result;
    result = a + b;
    return result;
}

int sub(int a, int b)
{
	int result;
	result = a - b;
	return result;
}

int mul(int a, int b)
{
	int result;
	result = a * b;
	return result;
}

float divide(int a, int b)
{
	if (b == 0)
	{
		return 0;
	}
	else {
		float result;
		result = (float)a / (float)b;
		return result;
	}
}
