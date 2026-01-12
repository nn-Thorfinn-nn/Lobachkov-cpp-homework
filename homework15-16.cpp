#include <iostream>

using namespace std;

int main() {
    const double cx = 2.0;
    const double cy = -1.0;
    const double r = 5.0;
    const double r_squared = r * r;

    double x, y;
    cout << "Введите координаты точки (x y): ";
    
    if (!(cin >> x >> y)) {
        cout << "Ошибка! Введенные значения должны быть числами" << endl;
        return 1;
    }
    
    if (x != static_cast<int>(x) || y != static_cast<int>(y)) {
        cout << "Ошибка! Введенные числа должны быть целыми" << endl;
        return 1;
    }

    double distance_squared = (x - cx) * (x - cx) + (y - cy) * (y - cy);

    if (distance_squared < r_squared) {
        cout << "Точка находится внутри окружности" << endl;
    } else if (distance_squared > r_squared) {
        cout << "Точка находится вне окружности" << endl;
    } else {
        cout << "Точка находится на границе окружности" << endl;
    }

    return 0;
}