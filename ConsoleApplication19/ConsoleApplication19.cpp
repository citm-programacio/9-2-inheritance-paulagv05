#include <iostream>
using namespace std;

class Building {
protected:
    string name;
public:
    Building(string _n) : name(_n) {}
    string getName() {
        return name;
    }
};

class Warehouse : public Building {
private:
    int wood;
    int rocks;
    int wheat;

public:
    Warehouse(string _n, int _w, int _r, int _wh)
        : Building(_n), wood(_w), rocks(_r), wheat(_wh) {}

    void printResources() {
        cout << "Name: " << name << endl;
        cout << "Wood: " << wood << ", Rocks: " << rocks << ", Wheat: " << wheat << endl;
    }
};

class House : public Building {
private:
    int floors;
    int inhabitants;
    int servants;

public:
    House(string _n, int _f, int _i, int _s)
        : Building(_n), floors(_f), inhabitants(_i), servants(_s) {}

    void printHouse() {
        cout << endl << "Name: " << name << endl;
        cout << "Floors: " << floors << ", Inhabitants: " << inhabitants << ", Servants: " << servants << endl;
    }
};

class Temple : public Building {
private:
    string god;
    int priests;

public:
    Temple(string _n, string _g, int _p)
        : Building(_n), god(_g), priests(_p) {}

    void printTemple() {
        cout << endl << "Name: " << name << endl;
        cout << "God: " << god << ", Priests: " << priests << endl;
    }
};

int main() {
    Warehouse warez("Warehouse", 120, 21, 12);
    House house("Roman House", 2, 5, 3);
    Temple temple("Temple of Jupiter", "Jupiter", 10);

    warez.printResources();
    house.printHouse();
    temple.printTemple();

    return 0;
}
