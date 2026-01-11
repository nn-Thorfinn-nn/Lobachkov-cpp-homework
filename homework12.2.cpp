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
    
    void show() const {
        cout << "Товар: " << name << endl;
        cout << "Цена: " << price << endl;
        cout << "Количество на складе: " << quantity << endl;
        cout << "Статус: " << (isAvailable() ? "В наличии" : "Нет в наличии") << endl;
    }
};

int main() {
    Product product1("Телефон", 19990, 3);
    Product product2("Планшет", 29990, 0);
    Product product3("Наушники", 4990, 2);
    
    cout << "Товар 1:" << endl;
    product1.show();
    
    cout << "Товар 2:" << endl;
    product2.show();
    
    cout << "Товар 3:" << endl;
    product3.show();
    
    return 0;
}