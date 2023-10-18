
#include "Header.h"




int main()
{
    int a ;
	int b ;
	int c;
	float d;

	cout << "Enter two numbers" << endl;
	cin >> a;
	cin >> b;

	c = add(a, b);
	cout << a << "+" << b << "=" << c << endl;

	c = sub(a, b);
	cout << a << "-" << b << "=" << c << endl;

	c = mul(a, b);
	cout << a << "*" << b << "=" << c << endl;

	
	
		
	d = divide(a, b);
	if (d != 0)
	{
		cout << a << "/" << b << "=" << d << endl;
	}
	else 
	{
		cout << "Cannot divide by zero" << endl;
	}
	
}
