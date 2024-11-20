#include <iostream>
#include <string>
using namespace std;

// Структура для адреси
struct Address {
    string street;
    int number;
    Address(string s, int n) : street(s), number(n) {}
};

// Батьківський клас "Місто"
class City {
protected:
    string name;
    Address address;
public:
    City(string n, Address addr) : name(n), address(addr) {}
    virtual void display() {  // Віртуальна функція
        cout << "Місто: " << name << ", Адреса: " << address.street << " " << address.number << endl;
    }
};

// Дочірній клас "Промисловий центр"
class IndustrialCenter : public City {
private:
    string industryType;
public:
    IndustrialCenter(string n, Address addr, string type) : City(n, addr), industryType(type) {}
    void display() override {  // Перевизначена віртуальна функція
        cout << "Промисловий центр: " << name << ", Тип промисловості: " << industryType 
             << ", Адреса: " << address.street << " " << address.number << endl;
    }
};

// Дочірній клас "Культурний центр"
class CulturalCenter : public City {
private:
    string culturalType;
public:
    CulturalCenter(string n, Address addr, string type) : City(n, addr), culturalType(type) {}
    void display() override {  // Перевизначена віртуальна функція
        cout << "Культурний центр: " << name << ", Тип культури: " << culturalType 
             << ", Адреса: " << address.street << " " << address.number << endl;
    }
};

int main() {
    // Створення об'єктів
    Address addr1("Київська", 1);
    Address addr2("Львівська", 10);

    City* city1 = new IndustrialCenter("Київ", addr1, "Технологічний");
    City* city2 = new CulturalCenter("Львів", addr2, "Музейний");

    // Виведення даних через віртуальні функції
    city1->display();
    city2->display();

    // Очищення пам'яті
    delete city1;
    delete city2;

    return 0;
}

