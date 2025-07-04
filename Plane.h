#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Plane
{

private:

    char* flightNumber;
    char* from;
    char* to;
    char* model;
    int seatsTotal;
    int seatsTaken;
public:

    Plane();
    Plane(const char* flightNumber, const char* from, const char* to, const char* model, int totalSeats, int takenSeats);
    ~Plane();

    void showInfo();
    bool sellTicket();
    bool returnTicket();

    const char* getFlightNumber();
    const char* getFrom();
    const char* getTo();
    const char* getModel();
    int getSeatsTotal();
    int getSeatsTaken();

    void setFlightNumber(const char*);
    void setFrom(const char*);
    void setTo(const char*);
    void setModel(const char*);
    void setSeatsTotal(int);
    void setSeatsTaken(int);
};
