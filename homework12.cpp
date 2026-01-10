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
    
    void show() const {
        cout << "Товар: " << name << endl;
        cout << "Цена: " << price << endl;
        cout << "Количество на складе: " << quantity << endl;
    }
};

int main() {
    Product product1("Телефон", 19990, 5);
    
    cout << "Информация о товаре:" << endl;
    product1.show();
    
    cout << "\nИспользование сеттеров и геттеров" << endl;
    
    Product product2;
    
    product2.setName("Ноутбук");
    product2.setPrice(54990);
    product2.setQuantity(3);
    
    cout << "Название: " << product2.getName() << endl;
    cout << "Цена: " << product2.getPrice() << endl;
    cout << "Количество: " << product2.getQuantity() << endl;
    
    cout << "\nПолный вывод через show()" << endl;
    product2.show();
    
    return 0;
}