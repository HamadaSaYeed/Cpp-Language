# include <iostream>
using namespace std;

// CaLL by reference

void set(int *a)  // pointer (int *a)   // variable  (int a)


{
	*a = 0;        //    a = 0 ﬁÌ„Â 


	cout << "in set function = " << *a << endl; // 0


}

int main()
{
	int a = 10;  

	cout << "beforme calling set function = " << a << endl;    // 10

	set(& a);     //   a = 0   // call set function «” œ⁄«¡ ⁄‰Ê«‰ «·œ«·Â

	cout << "after calling set function = " << a << endl;  // 0


	return 0;


}