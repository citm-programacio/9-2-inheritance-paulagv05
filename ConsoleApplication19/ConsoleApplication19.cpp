#include <iostream>
using namespace std;

class building {
protected:
    string name;
public:
    building(string _n) {
        name = _n;
    }
    string getName() {
        return name;
    }
};

class warehouse : public building {


};

int main()
{
    string depName = 'deposit';
    warehouse warez(depName);
    cout <<

}