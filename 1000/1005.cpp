#include <iostream>
#define N 1000
using namespace std;

struct Luggage {
    char *description;
    int count;
    double weight;
};

struct Passenger {
    int luggageSize;
    char *name;
    Luggage *luggage;
};


int main() {
    int n;
    cin >> n;

    Passenger *passengers = new Passenger[n]; // NOLINT(modernize-use-auto)

    for (int i = 0; i < n; ++i) {
        passengers[i].name = new char[N];
        cin >> passengers[i].name >> passengers[i].luggageSize;
        passengers[i].luggage = new Luggage[n];
        for (int j = 0; j < passengers[i].luggageSize; ++j) {
            passengers[i].luggage[j].description = new char[N];
            cin >> passengers[i].luggage[j].description
                >> passengers[i].luggage[j].count
                >> passengers[i].luggage[j].weight;
        }
    }

    double weight;
    double max_weight = passengers[0].luggage[0].count * passengers[0].luggage[0].weight;
    int i_index = 0;
    int j_index = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < passengers[i].luggageSize; ++j) {
            weight = passengers[i].luggage[j].count * passengers[i].luggage[j].weight;
            if (weight > max_weight) {
                max_weight = weight;
                i_index = i;
                j_index = j;
            }
        }
    }

    cout << passengers[i_index].name << endl;
    cout << passengers[i_index].luggage[j_index].description;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < passengers[i].luggageSize; ++j) {
            delete[] passengers[i].luggage[j].description;
        }
        delete[] passengers[i].luggage;
        delete[] passengers[i].name;
    }

    return 0;
}
