//
//  FoodDeliveryFSM.h
//  finite-state-machine
//
//  Created by Md Shahjahan Miah on 15.05.24.
//


#ifndef FoodDeliveryFSM_h
#define FoodDeliveryFSM_h

#include "State.h"
#include <string>

class FoodDeliveryFSM {
private:
    State currentState;

public:
    FoodDeliveryFSM();
    void handleEvent(Event event);
    std::string getState() const;
};

#endif // FOOD_DELIVERY_FSM_H
