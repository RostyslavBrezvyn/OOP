#ifndef CITY_H
#define CITY_H

#include <string>
using namespace std;

class City {
public:
    City(string name, int population);
    virtual ~City();
    
    virtual void inputData();
    virtual void displayData() const;
    
protected:
    string name;
    int population;
};

#endif

