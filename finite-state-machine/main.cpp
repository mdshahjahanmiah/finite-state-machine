//
//  main.cpp
//  finite-state-machine
//
//  Created by Md Shahjahan Miah on 15.05.24.
//

#include "FoodDeliveryFSM.h"
#include <iostream>

int main() {
    FoodDeliveryFSM fsm;

    std::cout << "Initial State: " << fsm.getState() << std::endl;

    fsm.handleEvent(ORDER_RECEIVED); // Transition to PREPARING
    std::cout << "Current State: " << fsm.getState() << std::endl;

    fsm.handleEvent(PREPARED); // Transition to READY_FOR_PICKUP
    std::cout << "Current State: " << fsm.getState() << std::endl;

    fsm.handleEvent(PICKED_UP); // Transition to OUT_FOR_DELIVERY
    std::cout << "Current State: " << fsm.getState() << std::endl;

    fsm.handleEvent(DELIVERED_EVENT); // Transition to DELIVERED
    std::cout << "Current State: " << fsm.getState() << std::endl;

    return 0;
}

