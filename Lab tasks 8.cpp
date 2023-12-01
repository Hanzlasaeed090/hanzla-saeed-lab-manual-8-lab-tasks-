#include <iostream>
using namespace std;
int main() {
    int arr[5];
    cout << "Enter 5 integers: "<<endl;;
    
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int n = 5;
    int i, j, minIndex, temp;
    for (i = 0; i < n-1; i++) {
        minIndex = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[minIndex])
                minIndex = j;
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    cout << "Sorted array:"<<endl;
    for (i=0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
