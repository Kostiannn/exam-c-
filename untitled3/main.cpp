#include <iostream>

using namespace std;

int main()
{
    const int N = 10;  // Розмір масиву
    int a[N] = {-5, 3, -2, 4, -1, -6, 2, -3, 1, -4};
    int sum = 0;  // сума елементів між першим та другим позитивними елементами
    bool first_positive = false;  // прапор, що вказує, чи зустрітий перший позитивний елемент
    bool second_positive = false;  //прапор, що вказує, чи зустріти другий позитивний елемент
    for (int i = 0; i < N; i++) {
        if (a[i] > 0) {
            if (!first_positive) {

                first_positive = true;
            } else {

                second_positive = true;
                break;
            }
        }
        if (first_positive && !second_positive) {
            // якщо ми зустріли перший позитивний елемент, але ще не зустріли другий,
            // то додаємо поточний елемент до суми
            sum += a[i];
        }
    }
    cout << sum << endl;
    return 0;
}