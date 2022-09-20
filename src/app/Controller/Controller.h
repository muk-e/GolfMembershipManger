#ifndef __CONTROLLER_H__
#define __CONTROLLER_H__

#include "Monitor.h"
#include "DeviceData.h"

class Controller
{
private:
    Monitor *monitor;

public:
    Controller();
    virtual ~Controller();
    void updateEvent(DeviceData data);
};

#endif /* __CONTROLLER_H__ */