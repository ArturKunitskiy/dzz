#include <iostream>
using namespace std;
int main()
{
    int size1;
    cout << "Input massif size: " << endl;
    cin >> size1;
    int* arr = new int[size1];
    cout << "First massif: " << endl;
    for (int i = 0; i < size1; i++)
    {
        arr[i] = i + 1;
        cout << arr[i] << "\t";
    }
    cout << endl << "Second massif: " << endl;

    int* arr2 = new int[size1 + 1];
    for (int i = 0; i < size1 + 1; i++)
    {
        if (i == size1)
        {
            arr2[i] = 100;
        }
        else {
            arr2[i] = arr[i];
        }
        cout << arr2[i] << "\t";
    }
    cout << endl;
    delete[] arr;
    delete[] arr2;
}e future, to open this project again, go to File > Open > Project and select the .sln file
