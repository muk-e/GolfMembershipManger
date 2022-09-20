#include "Listener.h"
#include <string.h>

Listener::Listener()
{
    rfid = new CardReader(new SPI(10, 3000000));
    controller = new Controller();
}

Listener::~Listener()
{
}

void Listener::checkEvent()
{
    if (checkRfid()) {
        controller->updateEvent(rfid->getCardNumber());
    }
}

bool Listener::checkRfid()
{
    static unsigned int prevCheckTime = 0;
    
    if (millis() - prevCheckTime < 1000) {
        return false;
    }
    prevCheckTime = millis();

    if (rfid->isCard()) return true;

    return false;
}