# include <iostream>
using namespace std;
int add(int x, int y, int z)
{
	int answer = x + y + z;
	return answer;
}
int main()
{
	cout << add(30, 57, 3);
	return 0;
}