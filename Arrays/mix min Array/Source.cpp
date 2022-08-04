#include <iostream>

using namespace std;

int find_Min(int arr[], int size)
{
    int min_value = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min_value) // 3   ---------    (>) = 11
        {
            min_value = arr[i];
        }
    }
    return min_value;
}

int main()
{
    int arr[] = { 11,5,8,3,7 };

    cout << find_Min(arr, 5);

    return 0;
}
