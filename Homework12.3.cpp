#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:
    Product() : name(""), price(0.0), quantity(0) {}
    
    Product(const string& n, double p, int q) : name(n), price(p), quantity(q) {}
    
    string getName() const {
        return name;
    }
    
    double getPrice() const {
        return price;
    }
    
    int getQuantity() const {
        return quantity;
    }
    
    void setName(const string& n) {
        name = n;
    }
    
    void setPrice(double p) {
        price = p;
    }
    
    void setQuantity(int q) {
        quantity = q;
    }
    
    bool isAvailable() const {
        return quantity > 0;
    }
    
    void sell(int amount) {
        if (amount <= 0) {
            cout << "Ошибка: количество для продажи должно быть положительным числом!" << endl;
            return;
        }
        
        if (quantity >= amount) {
            quantity -= amount;
            cout << "Продано " << amount << " единиц товара \"" << name << "\"" << endl;
        } else {
            cout << "Недостаточно товара на складе! Запрошено: " << amount 
                 << ", в наличии: " << quantity << endl;
        }
    }
    
    void show() const {
        cout << "Товар: " << name << endl;
        cout << "Цена: " << price << endl;
        cout << "Количество на складе: " << quantity << endl;
        cout << "Статус: " << (isAvailable() ? "В наличии" : "Нет в наличии") << endl;
    }
};

int main() {
    Product phone("Телефон", 19990, 5);
    
    cout << "Стостояние товара:" << endl;
    phone.show();
    
    cout << "Продажа:" << endl;
    
    cout << "Продажа 3 единиц:" << endl;
    phone.sell(3);
    phone.show();
    
    return 0;
}