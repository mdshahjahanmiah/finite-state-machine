//
//  FoodDeliveryFSM.cpp
//  finite-state-machine
//
//  Created by Md Shahjahan Miah on 15.05.24.
//

#include "FoodDeliveryFSM.h"
#include <iostream>

FoodDeliveryFSM::FoodDeliveryFSM() : currentState(ORDER_PLACED) {}

void FoodDeliveryFSM::handleEvent(Event event) {
    switch (currentState) {
        case ORDER_PLACED:
            if (event == ORDER_RECEIVED) {
                currentState = PREPARING;
                std::cout << "Transitioned to PREPARING state" << std::endl;
            } else {
                std::cout << "Invalid event for the current state" << std::endl;
            }
            break;

        case PREPARING:
            if (event == PREPARED) {
                currentState = READY_FOR_PICKUP;
                std::cout << "Transitioned to READY_FOR_PICKUP state" << std::endl;
            } else {
                std::cout << "Invalid event for the current state" << std::endl;
            }
            break;

        case READY_FOR_PICKUP:
            if (event == PICKED_UP) {
                currentState = OUT_FOR_DELIVERY;
                std::cout << "Transitioned to OUT_FOR_DELIVERY state" << std::endl;
            } else {
                std::cout << "Invalid event for the current state" << std::endl;
            }
            break;

        case OUT_FOR_DELIVERY:
            if (event == DELIVERED_EVENT) {
                currentState = DELIVERED;
                std::cout << "Transitioned to DELIVERED state" << std::endl;
            } else {
                std::cout << "Invalid event for the current state" << std::endl;
            }
            break;

        case DELIVERED:
            std::cout << "Order already delivered. No further transitions." << std::endl;
            break;
    }
}

std::string FoodDeliveryFSM::getState() const {
    switch (currentState) {
        case ORDER_PLACED: return "ORDER_PLACED";
        case PREPARING: return "PREPARING";
        case READY_FOR_PICKUP: return "READY_FOR_PICKUP";
        case OUT_FOR_DELIVERY: return "OUT_FOR_DELIVERY";
        case DELIVERED: return "DELIVERED";
        default: return "UNKNOWN";
    }
}

