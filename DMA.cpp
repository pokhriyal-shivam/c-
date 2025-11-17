#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    // Dynamic array
    int *arr = new int[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "You entered:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    delete[] arr;   // deallocation
    return 0;
}
