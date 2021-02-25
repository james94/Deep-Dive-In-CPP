#include <iostream>
using namespace std;

/**
* Binary Search for key element in sorted array. Use mid element by taking low and high element of array divided by 2.
* Keep trying mid elements to search for key element until found or until l <= h is no longer true, then not found.
*/
void binarySearch(int Arr[], int len, int key)
{
    cout << "Key element to binary search for in array is " << key << endl;

    int low = 0, high = len-1, mid;

    while(low <= high)
    {
        mid = (low + high)/2;

        if(key == Arr[mid])
        {
            cout << "Found at " << mid << endl;
            return;
        }
        else if(key < Arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << "Not Found" << endl;

    return;
}

int main()
{
    int n = 10, A[10] = {6,8,13,17,20,22,25,28,30,35};

    int key = 25;

    binarySearch(A, n, key);

    key = 27;

    binarySearch(A, n, key);

    return 0;
}
