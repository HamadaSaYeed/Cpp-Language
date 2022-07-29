# include <iostream>

using namespace std;

int fact(int num)
   
// «·ﬁ«‰Ê‰       n * name function (n - 1)

{
	if (num == 1)
	{
		return 1;
	}
	else
		return num * fact(num - 1);
}
// 6*5*4*3*2*1 = 720
// fact (6)    = 720 ##
// 6* fact (5) = 720
// 5* fact (4) = 120
// 4* fact (3) = 24
// 3* fact (2) = 6
// 2* fact (1) = 2
//1
int main()
{


	cout << fact(6) << endl;

	return 0;
}

/*
* 
* 
*   ÂÊÂ ÂÊÂ «·ﬂÊœ

#include <iostream>
using namespace std;

int main() {
    int n;
    long double factorial = 1.0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;    
    }

    return 0;
}

*/
