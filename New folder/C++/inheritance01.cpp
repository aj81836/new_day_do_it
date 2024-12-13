#include<iostream>  // Correct header for C++
using namespace std;

class child {
    public:
        int id;
        char name[10];

        void getchild() {
            cout << "Enter the id and name of child:\n";
            cin >> id >> name;
        }

        void putchild() {
            cout << "id = " << id << ", name = " << name << endl;
        }
};

class phrt : public child {
    float height, weight;

    public:
        void getsphrt() {
            cout << "Enter height and weight:\n";
            cin >> height >> weight;
        }

        void putphrt() {
            cout << "height = " << height << ", weight = " << weight << endl;
        }
};

int main() {
    child ch;
    ch.getchild();
    ch.putchild();

    phrt ph;
    ph.getsphrt();
    ph.putphrt();

    return 0;
}
