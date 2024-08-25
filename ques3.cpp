// Given an array where all its elements are sorted in increasing order except two swapped
// elements, sort it in linear time. Assume there are no duplicates in the array.
// Input: A[] = [3, 8, 6, 7, 5, 9, 10]
// Output: A[] = [3, 5, 6, 7, 8, 9, 10]
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 8, 6, 7, 5, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index1 = -1, index2 = -1;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]> arr[i+1])
        {
            if (index1 == -1)  index1 = i;
            else index2 = i + 1;
        }
    }
    swap(arr[index1], arr[index2]);
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" "; 
    }
}