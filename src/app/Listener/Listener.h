#ifndef __LISTENER_H__
#define __LISTENER_H__

#include "CardReader.h"
#include "Monitor.h"
#include "Controller.h"

class Listener
{
private:
    CardReader *rfid;
    Controller *controller;
    uint8_t rfidData[16];
public:
    Listener();
    virtual ~Listener();
    void checkEvent();
    bool checkRfid();
};

#endif /* __LISTENER_H__ */
