#include <iostream>

using namespace std;

int main() {
    int num, *arr;
    float average = 0;

    cout << "Enter number of elements: ";
    cin >> num;
    arr = new int[num];

    cout << "Enter elements: " << endl;
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
        average += arr[i];
    }

    average = average / num;

    cout << "Given array: {";
    for (int i = 0; i < num; i++) {
        cout << arr[i];
        i == num - 1 ? cout << "}\n" : cout << ", ";
    }
    cout << "Average: " << average << endl;

    return 0;
}
