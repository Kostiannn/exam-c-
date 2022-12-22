#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Array declaration and initialization
    double array[] = {1.5, -2.7, 3.1, 4.2, -5.3};
    int n = sizeof(array) / sizeof(array[0]); // Calculate array

    // Початкове значення максимального за модулем елемента
    double max_abs = abs(array[0]);

    // Перебір елементів масиву
    for (int i = 1; i < n; i++) {
        double current_abs = abs(array[i]); //
        if (current_abs > max_abs) { //
            max_abs = current_abs; //
        }
    }

    cout << "Максимальний елемент за модулем: " << max_abs << endl;

    return 0;
}
