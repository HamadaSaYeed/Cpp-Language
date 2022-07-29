# include <iostream>

using namespace std;

int main()
{
	
	int a[] = { 5,9,1,7,6,4,3,0 };

	 int result = sizeof(a) / sizeof(a[0]);

	cout << result << endl;





	int x[] = { 5,9,1,7,6,4 };

	cout << sizeof(x) / sizeof(int) << endl;



	

	string name[] = { "Hamada" ,"Sayed" };

	cout << sizeof(name) / sizeof(string) << endl;





	return 0;

}
