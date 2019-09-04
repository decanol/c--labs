#include <iostream>
#include <string>
using namespace std;

class Product {
public:
    string title;
    string firm;
    float price;
    int date;
    int number;
    Product() {
        this->title = "N/A";
        this->firm = "N/A";
        this->price = 0.0;
        this->date = 0;
        this->number = 0;
    }
    Product(string title, string firm, float price, int date, int number) {
        this->title = title;
        this->firm = firm;
        this->price = price;
        this->date = date;
        this->number = number;
    }
    void Change(int i){
        string title; string firm; float price; int date; int number;
        cout<<i<<" Product"<<endl;
        cout<<"Input title: ";
        cin>>title;
        cout<<"Input firm: ";
        cin>>firm;
        cout<<"Input price: ";
        cin>>price;
        cout<<"Input date: ";
        cin>>date;
        cout<<"Input number: ";
        cin>>number;
        this->title = title;
        this->firm = firm;
        this->price = price;
        this->date = date;
        this->number = number;
    }
    void Display() {
        cout << this->title << endl;
        cout << this->firm << endl;
        cout << this->price << endl;
        cout << this->date << endl;
        cout << this->number << endl;
        cout << endl;
    }
    void printByTitle(string title){
        if(this->title == title){
            this->Display();
        }
    }
    void printFixedPriceProduct(string title, float price) {
        if(this->title == title){
            if(this->price <= price){
                this->Display();
            }
        }
    }

    void printOverDateProduct(int date) {
        if(this->date > date){}
        this->Display();
    }
};

int main() {

    Product arrayOfProducts[8];
    string title;
    for (int i = 0; i < 4; ++i) {

        arrayOfProducts[i].Change (i+1);
    }
    for (int i = 0; i < 4; ++i) {
        arrayOfProducts[i].Display();
    }
    string checkTitle;
    cout<<"Filter: title: ";
    cin>>checkTitle;
    float checkPrice;
    cout<<"Filter: price: ";
    cin>>checkPrice;
    int checkDate;
    cout<<"Filter: date: ";
    cin>>checkDate;
    cout<<"Filter: by title: "<<checkTitle;
    for (int i = 0; i < 4; ++i) {
        arrayOfProducts[i].printByTitle(checkTitle);
    }
    cout<<"Filter by price:"<<checkPrice;
    for (int i = 0; i < 4; ++i) {
        arrayOfProducts[i].printFixedPriceProduct(checkTitle, checkPrice);
    }
    cout<<"Filter by date:"<<checkDate;
    for (int i = 0; i < 4; ++i) {
        arrayOfProducts[i].printOverDateProduct(checkDate);
    }
    return 0;
}
