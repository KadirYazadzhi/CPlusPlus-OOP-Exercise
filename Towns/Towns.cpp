#include "Towns.h"

using namespace std;

    vector<string> Towns::getName() const {
        return names;
    }

    vector<int> Towns::getPopulation() const {
        return populations;
    }

    void Towns::setName(const string & newName) {
        names.push_back(newName);
    }

    void Towns::setPopulation(const int & newPopulation) {
        populations.push_back(newPopulation);
    }

    void Towns::printData() const {
        for (size_t i = 0; i < names.size(); i++) {
            cout << names[i] << " - " << populations[i] << endl;
        }
    }

    void Towns::readData() {
        string nameTown;
        int popTown;

        while (true) {
            cin >> nameTown;
            if (nameTown == "end") {
                break;
            }
            cin >> popTown;

            setName(nameTown);
            setPopulation(popTown);
        }
    }


int main() {
    Towns myTown;

    myTown.readData();
    myTown.printData();
    return 0;
}