#include <iostream>
using namespace std;

/**
* Linear Search for key element in array. Search each element in unsorted array until key element found.
*/
void linearSearch(int Arr[], int len, int key)
{
    cout << "Key element to linear search for in array is " << key << endl;
    for(int i = 0; i < len; i++)
    {
        if(key == Arr[i])
        {
            cout << "found at " << i << endl;
            return;
        }
    }

    cout << "Not Found" << endl;
    return;
}

int main()
{
    int n = 10, A[10] = {6,11,25,8,15,7,12,20,9,14};

    int key = 12;

    linearSearch(A, n, key);

    key = 35;

    linearSearch(A, n, key);

    return 0;
}
