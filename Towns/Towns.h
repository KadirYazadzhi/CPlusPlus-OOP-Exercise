#ifndef TOWNS_H
#define TOWNS_H

#include <iostream>
#include <vector>

class Towns {
    private:
        std::vector<std::string> names;
        std::vector<int> populations;
    public:
        Towns () = default;

        std::vector<std::string> getName() const;

        std::vector<int> getPopulation() const;

        void setName(const std::string & newName);

        void setPopulation(const int & newPopulation);

        void printData() const;

        void readData();

};
#endif
