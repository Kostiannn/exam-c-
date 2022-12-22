#include <iostream>

using namespace std;

int main()
{
    const int N = 10;  // Розмір масиву
    int a[N] = {-5, 3, 0, 4, -1, -6, 2, -3, 1, -4};  // Вихідний масив
    int left = 0, right = N - 1;
    while (left <= right) {
        if (a[left] != 0) {

            left++;
        } else if (a[right] == 0) {

            right--;
        } else {

            swap(a[left], a[right]);
            left++;
            right--;
        }
    }
    //Виводимо масив
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
