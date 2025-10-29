//вариант 2 Простая конвертация валют
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const double USD_RATE = 80.0;
    const double EUR_RATE = 92.0;
    double rub;
    cin >> rub;
    cout << "Введите сумму в рублях: " << rub << endl;
    double dol = rub / USD_RATE;
    double eur = rub / EUR_RATE;
    cout << fixed << setprecision(2);
    cout << "\nРезультаты конвертации:" << endl;
    cout << "Рубли: " << rub << endl;
    cout << "Доллары: " << dol << endl;
    cout << "Евро: " << eur << endl;
    return 0;
}