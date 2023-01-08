/*
 * WAP to calculate the average of n numbers of any type using the concept of 
 * templates.
 */
#include <iostream>
using namespace std;

template <typename T>
double average(T *arr, int length) {
    double avg = 0;
    for (int i = 0; i < length; i++) {
        avg += arr[i];
    }
    avg /= length;
    return avg;
}

int main() {
    int n;
    int * int_arr;
    double * double_arr;
    cout << "How many elements in array?: ";
    cin >> n;

    int_arr = new int[n];
    double_arr = new double[n];

    cout << "Enter integers for int array: ";
    for (int i = 0; i < n; i++) {
        cin >> int_arr[i];
    }

    cout << "\nEnter double numbers for double array: ";
    for (int i = 0; i < n; i++) {
        cin >> double_arr[i];
    }

    cout << "Average of integer array: " << average(int_arr, n) << '\n';
    cout << "Average of double array: " << average(double_arr, n) << '\n';
    return 0;
}
