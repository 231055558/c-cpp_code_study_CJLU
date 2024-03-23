#include<iostream>
using namespace std;

class cylinder {
private:
    double r;
    double h;
    double volum;
public:
    cylinder(double r, double h) : r(r), h(h), volum(3.14 * r * r * h) {}
        void vol() {
            cout << "vol = " << volum << endl;
        }
    };
int main() {
    double r,h;
    cin >> r >> h ;
    cylinder yz1(r, h);
    yz1.vol();
    return 0;
    }
