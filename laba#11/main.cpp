#include <iostream>
#include <vector>
#include "IndustrialCenter.h"
#include "CulturalCenter.h"

using namespace std;

int main() {
    vector<City*> cities;

    int choice;
    do {
        cout << "1. Додати промисловий центр\n"
             << "2. Додати культурний центр\n"
             << "3. Показати всі центри\n"
             << "0. Вийти\n"
             << "Ваш вибір: ";
        cin >> choice;

        if (choice == 1) {
            IndustrialCenter* ic = new IndustrialCenter("", Address(), "");
            ic->input();
            cities.push_back(ic);
        } else if (choice == 2) {
            CulturalCenter* cc = new CulturalCenter("", Address(), "");
            cc->input();
            cities.push_back(cc);
        } else if (choice == 3) {
            for (const auto& city : cities) {
                city->display();
            }
        }
    } while (choice != 0);

    for (auto& city : cities) {
        delete city;
    }

    return 0;
}
