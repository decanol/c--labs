#include <iostream>

class Product {
public:
    char title;
    char firm;
    float price;
    int date;
    int number;
    Product(char title, char firm, float price, int date, int number) {
        title = title;
        firm = firm;
        price = price;
        date = date;
        number = number;
    }
};

void printFixedPriceProduct() {

}
void printOverDateProduct() {

}

int main() {
    Product milkProd("Butter", "Molokia", 15.99, 15, 60);
    std::cout << milkProd.firm << " " << milkProd.title << " " << milkProd.number << "\n";
    return 0;
}
