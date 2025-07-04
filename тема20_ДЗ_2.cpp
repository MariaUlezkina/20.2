#include <windows.h>
#include "Plane.h"

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Plane p1;
    Plane p2("PS123", "Одеса", "Харків", "Airbus A320", 180, 178);

    p1.sellTicket();
    p1.sellTicket();
    p1.returnTicket();

    p2.sellTicket(); 
    p2.returnTicket(); 
    p2.returnTicket();

    p1.showInfo();
    p2.showInfo();
    return 0;
}
