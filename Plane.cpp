#define _CRT_SECURE_NO_WARNINGS
#include "Plane.h"

Plane::Plane()
{
    flightNumber = new char[10] {"UN000"};
    from = new char[10] {"Київ"};
    to = new char[10] {"Львів"};
    model = new char[10] {"Boeing"};
    seatsTotal = 100;
    seatsTaken = 0;

    cout << "Літак за замовчуванням\n";
}

Plane::Plane(const char* flightNumber, const char* from, const char* to, const char* model, int totalSeats, int takenSeats)
{
    this->flightNumber = new char[strlen(flightNumber) + 1];
    strcpy(this->flightNumber, flightNumber);

    this->from = new char[strlen(from) + 1];
    strcpy(this->from, from);

    this->to = new char[strlen(to) + 1];
    strcpy(this->to, to);

    this->model = new char[strlen(model) + 1];
    strcpy(this->model, model);

    this->seatsTotal = totalSeats;
    this->seatsTaken = takenSeats;

    cout << "Літак з параметрами\n";
}

Plane::~Plane()
{
    delete[] flightNumber;
    delete[] from;
    delete[] to;
    delete[] model;

    cout << "видалили літак\n";
}

void Plane::showInfo()
{
    cout << "-------------------------------------------\n";
    cout << "Рейс: " << flightNumber << endl;
    cout << "Звідки: " << from << " Куди: " << to << endl;
    cout << "Модель: " << model << endl;
    cout << "Місць:" << seatsTaken << "/" << seatsTotal << endl;
    cout << "----------------------------------------\n\n";
}

bool Plane::sellTicket()
{
    if (seatsTaken < seatsTotal)
    {
        seatsTaken++;
        return true;
    }
    return false;
}

bool Plane::returnTicket() 
{
    if (seatsTaken > 0)
    {
        seatsTaken--;
        return true;
    }

    return false;
}

const char* Plane::getFlightNumber() 
{ 
    return flightNumber;
}
const char* Plane::getFrom()
{ 
    return from;
}
const char* Plane::getTo() 
{ 
    return to;
}
const char* Plane::getModel()
{ 
    return model; 
}
int Plane::getSeatsTotal() 
{
    return seatsTotal; 
}
int Plane::getSeatsTaken() 
{
    return seatsTaken;
}

void Plane::setFlightNumber(const char* val) 
{
    delete[] flightNumber;

    flightNumber = new char[strlen(val) + 1];
    strcpy(flightNumber, val);
}
void Plane::setFrom(const char* val) 
{
    delete[] from;

    from = new char[strlen(val) + 1];
    strcpy(from, val);
}
void Plane::setTo(const char* val) 
{
    delete[] to;
    to = new char[strlen(val) + 1];
    strcpy(to, val);
}
void Plane::setModel(const char* val) 
{
    delete[] model;

    model = new char[strlen(val) + 1];
    strcpy(model, val);
}

void Plane::setSeatsTotal(int val) 
{ 
    seatsTotal = val; 
}

void Plane::setSeatsTaken(int val)
{ 
    seatsTaken = val; 
}
