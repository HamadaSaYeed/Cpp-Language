# include <iostream>
using namespace std;

// CaLL by Value

void set(int a)

{
	a = 0;


	cout << "in set function = " << a << endl;  // 0


}

int main()
{
	int a = 10;

	cout << "beforme calling set function = " << a << endl;  // a = 10

	set(a);  // a = 0

	cout << "after calling set function = " << a << endl;  // a = 10


	return 0;


}