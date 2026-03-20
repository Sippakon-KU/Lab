#include <iostream>
using namespace std;

class Transportation
{
public:
    
virtual double 
 fare() = 0;
};

class Taxi
: public Transportation

{
private:
    double distance;
public:
    Taxi(): distance(0) {}

    void setDistance(double distance) {
        this->distance = distance;
    }

    double fare() override {
        double totalFare = 35;
        totalFare += 2*distance;

        return totalFare;
    }

};

class BmtaBus
: public Transportation

{
public:
double fare() override {
        return 6.5;
    }

};

class BTS
: public Transportation

{
private:
    int station;
public:
    BTS(): station(0) {}

    void setStation(int station) {
        this->station = station;
    }

    double fare() override {
        return 15 + (5 * station);
    }

};

class Passenger
{
private:
    double totalFare;
public:
   Passenger(): totalFare(0) {}

    void addTransportation(Transportation &transportation) {
        this->totalFare += transportation.fare();
    }

    double getTotalFare() {
        return totalFare;
    }

};

int main()
{
    Passenger passenger;
    while(1) {
        char transportType;
        cin >> transportType;
        if (transportType == 'A') {
            Taxi *taxi = new Taxi();
            double distance;
            cin >> distance;
            
taxi->setDistance(distance);
            passenger.addTransportation(*taxi);

        } else if (transportType == 'B') {
            BmtaBus *bus = new BmtaBus();
            
passenger.addTransportation(*bus);

        } else if (transportType == 'C') {
            BTS *bts = new BTS();
            int station;
            cin >> station;
            
bts->setStation(station);
            passenger.addTransportation(*bts);
            

        } else {
            break;
        }
    }
    cout << "Total Fare: " << passenger.getTotalFare() << endl;
}