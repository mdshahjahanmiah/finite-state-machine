//
//  State.h
//  finite-state-machine
//
//  Created by Md Shahjahan Miah on 15.05.24.
//

#ifndef STATE_H
#define STATE_H

// Define the states
enum State {
    ORDER_PLACED,
    PREPARING,
    READY_FOR_PICKUP,
    OUT_FOR_DELIVERY,
    DELIVERED
};

// Define the events
enum Event {
    ORDER_RECEIVED,
    PREPARED,
    PICKED_UP,
    DELIVERED_EVENT
};

#endif // STATE_H

