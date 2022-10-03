#include <iostream>
using namespace std;


void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{

    int x;
    cout << "x : ";
    cin >> x;

    int y;
    cout << "y : ";
    cin >> y;


    swap(x, y);



    cout << "x : " << x << "\n";
    cout << "y : " << y << "\n";

    return 0;
}


