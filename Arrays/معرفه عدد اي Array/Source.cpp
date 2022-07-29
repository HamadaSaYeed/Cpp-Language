# include <iostream>

using namespace std;

int main()
{  // ÇĞÇí  ÇÌíÈ ÚÏÏ ÚäÇÕÑ Çí ãÕİæİå
	//  sizeof(a) / sizeof(a[0]);

	int  a[] = { 45,12,578,385,36,6,68,33 };

	int result = sizeof(a) / sizeof(a[0]);


	cout << "result is = " << result << endl;


	return 0;

}