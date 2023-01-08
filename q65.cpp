/*
 * WAP to calculate the sum of any data types using the concept of class 
 * templates.
 */
#include <iostream>
using namespace std;

template <typename T>
class ArraySum {
    T * arr;
    int length = 0;
    T sum = 0;
    public:
        ArraySum() {
            arr = NULL;
        }

        ArraySum(T arr[], int length) {
            this->length = length;
            this->arr = new T[length];
            for (int i = 0; i < length; i++) {
                this->arr[i] = arr[i];
                sum += arr[i];
            }
        }

        ArraySum (ArraySum& obj) {
            arr = new T[obj.length];
            length = obj.length;
            sum = obj.sum;
            for (int i = 0; i < length; i++) {
                arr[i] = obj.arr[i];
            }
        }

        ~ArraySum() {
            delete[] arr;
        }

        T get_sum() {
            return sum;
        }

        int get_length() {
            return length;
        }

        void display_arr();
};

template <typename T>
void ArraySum<T>::display_arr() {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << '\n';
}

int main() {
    double doublearray[] = {2.3, 4.5, 33.3, 7.0};
    int intarray[] = {1, 2, 3, 4, 5, 6, 7, 8, 20};
    ArraySum<double> arr1(doublearray, 4);
    ArraySum<int> arr2(intarray, 9);

    cout << "Array 1: \n";
    cout << "Array: ";
    arr1.display_arr();
    cout << "Length: " << arr1.get_length() << '\n';
    cout << "Sum: " << arr1.get_sum() << '\n';

    cout << "\nArray 2: \n";
    cout << "Array: ";
    arr2.display_arr();
    cout << "Length: " << arr2.get_length() << '\n';
    cout << "Sum: " << arr2.get_sum() << '\n';
}
